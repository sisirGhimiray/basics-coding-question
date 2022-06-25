#include<stdio.h>
#include<string.h>
char *sort(char *str){
char *storStr=str;
int i,j,len=strlen(str);
int track;
char temp;
for(i=0;i<len-1;i++){
  track=0;
for(j=0;j<len-1-i;j++){
if(str[j]>str[j+1]){
temp=str[j];
str[j]=str[j+1];
str[j+1]=temp;
track=1;
}

}
if(track==0){
  return storStr;
}

}
return storStr;
}

int main(void){

char n[]="sisir";
printf("%s\n",sort(n));


  return 0;
}