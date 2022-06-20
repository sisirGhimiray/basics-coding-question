#include<stdio.h>
#include<string.h>
void printNumInWord(){
char *ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten"};
char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
char *el[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
int num,numStor[4],ld,d,i=0;

printf("Enter four digit number\n");
scanf("%d",&num);
d=num;
while(d>0){
  ld=d%10;
  d/=10;
  numStor[i]=ld;
  i++;
}
if(i>=4 &&numStor[3]!=0){
  printf("%s thousand ",ones[numStor[3]]);
}
if(i>=3&&numStor[2]!=0){
  printf("%s hundred ",ones[numStor[2]]);
}
if(i>=2){
if(numStor[1]>1&&numStor[0]!=0)
{
  printf(" %s %s\n",tens[numStor[1]],ones[numStor[0]]);
}else if(numStor[1]==1&&numStor[0]>=0){
  printf("%s \n",el[numStor[0]]);
}else if(numStor[1]>1&&numStor[0]==0){
printf(" %s ",tens[numStor[1]]);
}
else{
  printf("%s",ones[numStor[0]]);
}
}
if(i==1){
  printf("%s\n",ones[numStor[0]]);
}
if(num==0){
  printf("Zero\n");
}
}

int main(void){
int time=10;
while(time>0){
printNumInWord();
time--;
}



// 4567 four thousand five hundred sixty seven
// 4007 four thousand seven
// 4080 four thousand eighty
// 4014 four thousand fourteen
// char *ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten"};
// char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
// char *el[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
// if i==4 && numStor[3]!=0--> print ones[numStor[3]] thousand
// if numStor[2]>0 --> print ones[numStor[2]] hundred
// if numStor[1]>1&&numStor[0]!=0 --> print tens[numStor[1]] ones[numStor[0]] 
  return 0;
}