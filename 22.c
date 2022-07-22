#include<stdio.h>
#include<string.h>
// write a recursive function to reverse a string
void reverseString(char *str,int size){
 char temp;
  if(size<=1){
    return;
  }else{
    temp=str[0];
    str[0]=str[size-1];
    str[size-1]=temp;
    reverseString(str+1,size-2);
  }

}



int main(void){

char h[20]="hemant";
reverseString(h,strlen(h));
puts(h);
  return 0;
}