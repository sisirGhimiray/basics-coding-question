#include<stdio.h>

char *abbre(char *str,char *str1){
int i=0,j=0;
char *storStr=str1;
while(str[i]!='\0'){

while(str[i]==32){
  i++;
}
if(str[i]=='\0'){
  str[j]='\0';
}
str1[j++]=str[i];


while(str[i]!=32&&str[i]!='\0'){
  i++;
}

}

str[j]='\0';
return storStr;
}

int main(void){

char str[30]="Laugh out loud";
char str1[30];
printf("%s",abbre(str,str1));


  return 0;
}
