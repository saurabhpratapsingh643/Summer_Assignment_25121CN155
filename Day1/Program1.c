#include<stdio.h>
int main(){
int n,temp,digit,sum=0;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n!=0){
    digit=n%10;
    sum+=digit;
    n=n/10;
}
printf("The Sum of the number is=%d",sum);
    return 0;
}