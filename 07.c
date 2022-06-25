#include<stdio.h>
#include<string.h>
char *removeBlanks(char *str){
int i=0,j=0,t,newLenght;
int leadSpaceEnd=0,trailSpaceEnd=strlen(str)-1;
while(str[leadSpaceEnd]==32){
  leadSpaceEnd++;
}
while(str[trailSpaceEnd]==32){
  trailSpaceEnd--;
}
 t=strlen(str)-1-trailSpaceEnd;
 newLenght=strlen(str)-leadSpaceEnd-t;
 for(j=leadSpaceEnd;i<newLenght;i++,j++){
  str[i]=str[j];
 }
 str[i]='\0';
 return str;
}
int main(void){

char s[]="   sisir ";

// removeBlanks(s);
// puts(s);
printf("%s",removeBlanks(s));

  return 0;
}