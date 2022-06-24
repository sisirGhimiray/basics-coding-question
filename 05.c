#include<stdio.h>


int caseSensitiveComparision(char *str1,char *str2){
int i=0,j=0;
int same=0;
while(str1[i]!='\0'){
if(str1[i]-str2[j]==0||str1[i]-str2[j]==32||str1[i]-str2[j]==-32){
  same=1;
}else{
  return 0;
}
i++,j++;
}
return same;
}

int main(void){

char str1[50];
char str2[50];
printf("Enter string 1\n");
gets(str1);
printf("Enter string 2\n");
gets(str2);
caseSensitiveComparision(str1,str2)==1?printf("same"):printf("not same");

  return 0;
}