#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){

char str[50];
printf("Enter a string\n");
fgets(str,sizeof(str),stdin);
printf("%s...\n",str);

printf("Enter a string\n");
fgets(str,sizeof(str),stdin);
str[strlen(str)-1]='\0';
printf("%s...",str);
  return 0;
}