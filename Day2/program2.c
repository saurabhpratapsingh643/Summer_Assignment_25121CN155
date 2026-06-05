#include<stdio.h>
int main(){
int N,digit,reverse=0;
printf("Enter the number: ");
scanf("%d",&N);
int temp = N;
while(N!=0){
    digit=N%10;
    reverse=reverse*10+digit;
    N=N/10;
}
printf("The reverse of the number is: %d",reverse);
    return 0;
}