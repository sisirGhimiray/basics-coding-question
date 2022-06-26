#include<string.h>
#include<stdio.h>

char *extractSubString(char *str,int n,char *sstr,int start){
int i=0, j;
while(i!=start){
  i++;
}
for(j=0;j<n&&i<n;j++,i++){
sstr[j]=str[i];
}
printf("%d",j);
return sstr;
}

int main(void){
char str1[50]="hey sisir ghimiray you are hired",str2[50];
extractSubString(str1,15,str2,4);
puts(str2);
  return 0;
}