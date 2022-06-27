#include<stdio.h>
#include<string.h>
char *checkChar(char *str,char *c){

while(*str!='\0'){
  if(*str==*c){
    return str;
  }
  str++;
}
return NULL;
}

char *lastOccSubStr(char *str1,char *str2){
char *s=checkChar(str1,str2);
 char *prev=NULL;

 while(s!=NULL){
  if(s){
    prev=s;
  }else{
    return s;
  }
  s=checkChar(s+1,str2);
  if(s==NULL){
    break;
  }
  
 }

  return prev;
}


int main(void){

// a b c d g f c d  // a b v g h i y u
char str[50]="ssr ghmrai";
char str2[60]="isr ghimray";


printf("%s",lastOccSubStr(str,str2));
  return 0;
}

/// s=checkChar(str,str2);
///   checkChar(s+1,str2);