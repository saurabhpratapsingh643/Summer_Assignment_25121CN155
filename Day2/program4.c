#include<stdio.h>
int main(){
int N,originalN,reverseN=0,remainder;
printf("Enter the number: ");
scanf("%d",&N);
originalN=N;
while(N!=0){
    remainder=N%10;
    reverseN = reverseN * 10 + remainder;
    N=N/10;
}
  if(originalN == reverseN)
      printf("%d is a palindrome number:", originalN);
  else
  printf("%d is not a palindrome nummber",originalN);    
    return 0;
}