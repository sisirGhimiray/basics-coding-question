#include<stdio.h>
static int i=0;
int strLength(char *str){

  if(*str=='\0'){
    return 0;
  }
  return (1+strLength(str+1));
  
}

void display(char *str){
  if(*str=='\0')
  return;
  printf("%c",*str);
  display(str+1);
}

void displayInReverse(char *str){
  if(*str=='\0'){
    return ;
  }
  displayInReverse(str+1);
  printf("%c",*str);
}


int main(void){

printf("%d",strLength("sisir"));
display("sisir");
displayInReverse("sisir");


  return 0;
}