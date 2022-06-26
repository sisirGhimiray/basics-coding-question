#include<stdio.h>


char *sisirStrncpy(char *dest,char *src,int n){
  int i=0,j=0;
  for(;i<n;i++,j++){
    dest[i]=src[j];
  }
  dest[j]='\0';
}

int main(void){
char str[50]="sisir";
char strs[50];
sisirStrncpy(strs,str,3);
puts(strs);

  return 0;
}