#include<stdio.h>
#include<string.h>

int find_indexF(char *str1,char *str2){
char *s1=NULL;
char *s2=NULL;
char *c=NULL;
int i,j,k;

for(i=0;i<strlen(str1);i++){
j=0;
if(str1[i]==str2[0]&&str1[i-1]==32){
  k=i;
  while(str1[i]==str2[j]&&str2[j]!='\0'){
    i++;
    j++;
  }
  if(str2[j]=='\0'){
    return k;
  }
}

}


return -1;

}

int p_find_indexF(char *str1,char *str2){
char *p1=NULL;
char *p2=str1;
while(*str1!='\0'){
if(*str1==*str2&&(*(str1-1)==32)){
  p1=str1;
  while(*str1==*str2&&*str2!='\0'){
    str1++;
    str2++;
  }
  if(*str2=='\0'){
  return p1-p2;
  }
}

str1++;
}
return -1;
}


int main(void){

char str[50]="what is this this is an apple";
char str2[]="is";
printf("%d",p_find_indexF(str,str2));

  return 0;
}