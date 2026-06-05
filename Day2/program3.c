#include<stdio.h>
int main(){
int N,digit,product=1;
printf("Enter the number: ");
scanf("%d",&N);
int temp = N;
while(N!=0){
    digit=N%10;
    product*=digit;
    N=N/10;
}
printf("The product of the digit is = %d",product);
    return 0;
}