#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// write a program to input two strings and remove all the common characters from both the strings.
// Display the resultant string..

void removeCommonChar(char *str1,char *str2){
int i,j,k;
char str3[50];
char str4[50];
int len1=strlen(str1);
int len2=strlen(str2);
k=0;
for(i=0;i<len1;i++){

for(j=0;j<len2;j++){

if(str1[i]==str2[j]){
  break;
}

}
if(j==len2){
str3[k++]=str1[i];
}
}
str3[k]='\0';
k=0;
for(i=0;i<len2;i++){

for(j=0;j<len1;j++){

if(str2[i]==str1[j]){
  break;
}

}
if(j==len1){
str4[k++]=str2[i];
}

}
str4[k]='\0';
strcpy(str1,str3);
strcpy(str2,str4);
}

int main(void){

char str1[50];
char str2[50];
printf("Enter for string 1\n");
fgets(str1,50,stdin);
printf("Enter for string 2\n");
fgets(str2,50,stdin);
removeCommonChar(str1,str2);
puts(str1);
puts(str2);
  return 0;
}