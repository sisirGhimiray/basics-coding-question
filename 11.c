#include<stdio.h>
#include<string.h>

void delMultipleSpace(char *str1){
int len=strlen(str1),i=0,j=0;
while(str1[i]!='\0'){
  if(str1[i]==32&&str1[i+1]==32){
    i++;
    continue;
  }else{
    str1[j++]=str1[i++];
  }

}
str1[j]='\0';



}

int main(void){
// hey how are   you. hey how are 
char str1[100]="I love programming and            I  love Americans    and   British";
delMultipleSpace(str1);
puts(str1);







// char str2[100];

// int len=strlen(str1),i=0,j=0;
// while(str1[i]!='\0'){
//   if(str1[i]==32&&str1[i+1]==32){
//     i++;
//     continue;
//   }else{
//     str2[j++]=str1[i++];
//   }

// }
// str2[j]='\0';
// puts(str2);
return 0;
}
