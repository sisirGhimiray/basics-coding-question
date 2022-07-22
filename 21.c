#include<stdio.h>
// write a recursive function to replace each occurence of a character
// by another character in a string..

void f(char *str,char a,char b){

if(*str=='\0'){
  return;
}
if(*str==a){
  *str=b;
}
f(str+1,a,b);
}

int main(void){
printf("Enter a string\n");
char str[50];
fgets(str,50,stdin);
printf("Enter two characters\n");
char a,b;
scanf("%c\n%c",&a,&b);
f(str,a,b);
puts(str);
  return 0;
}