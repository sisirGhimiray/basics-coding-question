#include<stdio.h>
#include<string.h>

void makeUpperCase(char *str){
int i=0,j=0;
while(str[i]!='\0'){
if(str[i]>=97&&str[i]<=122){
str[j]=str[i]-32;
}
i++,j++;
}

}

int main(void){
char name[]="sisir want learn english but there is zero good source to learn it.";
makeUpperCase(name);
puts(name);

  return 0;
}