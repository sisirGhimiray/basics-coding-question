#include<stdio.h>
#include<string.h>

int convertStringNumToNum(char *strNum,int size){
  
  if(size<=0){
    return 0;
  }
  if(size==1){
    return 1*0+(strNum[size-1]-48)+convertStringNumToNum(strNum,size-1);
  }

  return convertStringNumToNum(strNum,size-1)*10+(strNum[size-1]-48);
  // printf("%d\n",*strNum-48);
  
}

// x-52=4  
int main(void){
printf("Enter a string in Number\n");
char s_num[10];
  scanf("%s",s_num);
 printf("%d\n",convertStringNumToNum(s_num,strlen(s_num)));
int n=convertStringNumToNum(s_num,strlen(s_num));
printf("%d\n",n+1);

}