#include<stdio.h>
#include<string.h>

int countSubString(char *str1,char *str2){
  char *str2Stor=str2;
  char *str1Stor=str1;
  int count=0;
  char *strObj=NULL;
  int range=strlen(str1),i,letterMatch=0;
  while(*str1!='\0'){
   str2=str2Stor;
if(*str1==*str2){
 strObj=str1;
  while(*str1==*str2){
    str1++;
    str2++;
  if(*str2=='\0'){
    count++;
    printf("%c",*strObj);
  }
  }
  
}else{
    str1++;
}


  }

return count;
}


int main(void){

//write a program to find the number of occurences of a particular word in a string
char sarr[]="hello sisir how are s you sisir are you good sisir";
char me[]="sisir";

printf("%d",countSubString(sarr,me));
  return 0;
}