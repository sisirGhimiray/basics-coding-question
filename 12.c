#include<stdio.h>


char *sisirStrncpy(char *dest,char *src,int n){     
  int i=0,j=0;
  for(;i<n;i++,j++){
    dest[i]=src[j];
  }
  dest[j]='\0';
  return dest;
}

int sisirStrncmp(char *str,char *strs,int n){
while(!(*str!=*strs)&&!(n<=0)&&!(*str=='\0')){
strs++;
str++;
n--;
}
return (*str-*strs);
}

void sisirStrnCat(char *str,char *strs,int n){
while(!(*str=='\0')){
  str++;
}
while(!(n<=0)){
 *str=*strs;
  str++;
  strs++;
  n--;
}
*strs='\0';
}

int main(void){
char str[50]="sisir";
char strs[50];
sisirStrncpy(strs,str,3);
puts(strs);
char str3[50]="sisif ghimiray";
char str4[50]="sisir ghimiray";
sisirStrncmp(str3,str4,8)==0?printf("same\n"):printf("not same\n");
printf("%d\n",sisirStrncmp(str3,str4,8));

char str5[50]="sisir";
char str6[50]="ghimiray";
sisirStrnCat(str5,str6,4);
puts(str5);
  return 0;
}