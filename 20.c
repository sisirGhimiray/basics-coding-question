#include<stdio.h>
#include<string.h>
// write a recursive function to count the number of vowels in a string

int countVowel(char *str){
  int count=0;
  if(*str=='\0'){
    return 0;
  }else if(*str=='a'||*str=='u'||*str=='i'||*str=='o'||*str=='e'
  ||*str=='A'||*str=='U'||*str=='I'||*str=='O'||*str=='E'){
    return 1+countVowel(str+1);
  }else{
    return countVowel(str+1);
  }


}

int main(void){
printf("%d",countVowel("hello sisir"));
  return 0;
}