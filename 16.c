#include<stdio.h>
#include<string.h>
//**** write a program to replace all occurences of word "Bangalore" by "Bengaluru" in a string.
//(e,o)->u

void strChng(char *str){
// char str[100]="JP Nagar Bangalore, Vijaynagar Bangalore, Jaynagar Bangalore";
char *p=strstr(str,"bangalore");
char x;
while(p!=NULL){
  x=p[9];
  strcpy(p,"bengaluru");
  p[9]=x;
  p=strstr(str,"bangalore");
}
puts(str);
}


int main(void){

char b[100]="Jp bangalore morgan bangalore huindam pura bangalore";
strChng(b);

  return 0;
}