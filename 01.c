#include<stdio.h>
#include<string.h>
int strch(char *str,char ch);
// (i)
void encrypt(char *str)
{
for(;*str!='\0';str++)
{
if(*str=='z'){
  *str='a';
}else{
  *str=*str+1;
}
}
}

void decrypt(char *str){
  for(;*str!='\0';str++){
    if(*str=='a'){
      *str='z';
    }else{
      *str=*str-1;
    }
  }
}
///////////////////
// ii.
  void encrypt2(char *str,char *str2){
    for(;*str!='\0';str++){
      if(*str<97||*str>122)
          continue;
      *str=str2[*str-97];
    }
  }
  void decrypt2(char *str1,char *str2){
    int i;
    for(;*str1!='\0';str1++){
      if(*str1<97||*str2>122)
        continue;
      i=strch(str2,*str1);
      *str1=i+97;
    }
  }

int strch(char *str,char ch){
  int i;
  for(i=0;str[i]!='\0';i++){
    if(str[i]==ch){
      return i;
    }
  }
}

int main(void){
// encryption decryption 1
char str[50];
strcpy(str,"sisir");
encrypt(str);
puts(str);
decrypt(str);
puts(str);
// encryption decryption 1  <---
// encryption decryption 2
char str2[30];
strcpy(str2,"mnkghdtabwvuprqczjxieyflos");
encrypt2(str,str2);
puts(str);
decrypt2(str,str2);
puts(str);
  return 0;
}