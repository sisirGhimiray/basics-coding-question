#include<stdio.h>
#include<string.h>

int str_start(char *str,char *subStr){

int trackRight=0;
while(*str==*subStr&&!(*(str+1)==32)){
  
  str++;
  subStr++;
  if(*str==*subStr){
    trackRight=1;
  }else{
    trackRight=0;
  }
}
if(trackRight){
  return 1;
}else{
  return 0;
}
}

int str_end(char *str,char *subStr){

int trackRight=0;
while(*(str+1)!='\0'){
  str++;
}
while(*(subStr+1)!='\0'){
  subStr++;
}
while(*str==*subStr&&!(*(str-1)==32)){
printf("str=%c \tsubStr=%c\n",*str,*subStr);
str--;
subStr--;
if(*str==*subStr){
  trackRight=1;
}else{
  trackRight=0;
}
}

if(trackRight){
  return 1;
}else{
  return 0;
}

}

int main(void){
char str[40]="sisir hey sisir";
char s[40]="sisir ghimiray";
printf("%d\n",str_start(str,s));
printf("%d\n",str_start(str,"sisi"));
printf("str_end answer is=%d",str_end(str,"sisir"));

  return 0;
}