#include<stdio.h>
#include<string.h>
// write a recursive function to return the index of first occurence of a character in a string.

int returnFirstOccCharacter(char *str,char c,int i){

if(*str=='\0'){
  return -1;
  }
if(*str==c){
  return i;
}
return returnFirstOccCharacter(str+1,c,i+1);
}

int lastOccurence(char *str,char c,int n){

if(n==0){
  return -1;
}

if(str[n-1]==c){
  return n-1;
}

return lastOccurence(str,c,n-1);

}




int main(void){

char me[30]="raja ram mohan roy";
// returnFirstOccCharacter(me,'i');
printf("%d\n",returnFirstOccCharacter(me,'y',0));
printf("%d \n",lastOccurence(me,'a',strlen(me)));
  return 0;
}