#include<stdio.h>
#include<string.h>
// write a recursive function to find whether a string is palindrome or not. A palindrome is a string that is
 // read the same way forward and backward for example "radar","hannah","madam"

int checkPunctuation(char c){
  int i=0;
  char punc[20]={'!','@','_','-','.',' ','\0'};
  while(*punc!='\0'){
    if(punc[i]==c){
      return 1;
    }
    punc[i++];
  }
  return 0;
}

int checkUpOrLowCase(char c1,char c2){

if(c1-c2==32||c1-c2==-32){
  return 1;
}else{
  return 0;
}

}

int checkPalindrome(char *str,int n){

if(n<=1){
  return 1;
}


if(*str=='!'||*str=='-'||*str==','||*str==' '){
  return checkPalindrome(str+1,n-1);
}
if(str[n-1]=='!'||str[n-1]=='-'||str[n-1]==','||str[n-1]==' '){
  return checkPalindrome(str,n-1);
}


if(*str==str[n-1]||checkUpOrLowCase(*str,str[n-1])){
  
return checkPalindrome(str+1,n-2);
}


}


int main(void){
printf("enter a string\n");
char str[20];
// fgets(str,20,stdin);
gets(str);
// scanf("%s",str);
printf("%d\n",checkPalindrome(str,strlen(str)));

  return 0;
}