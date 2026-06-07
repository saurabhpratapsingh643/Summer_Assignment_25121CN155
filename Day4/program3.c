#include<stdio.h>
int main(){
int N,digit,temp,remainder=0;
printf("Enter the number: ");
scanf("%d",&N);
temp=N;
while(N!=0){
    digit=N%10;
    remainder=remainder+(digit*digit*digit);
    N=N/10;
}
if(remainder==temp){
    printf("The %d is armstrong number",temp);
}
else{
    printf("The %d is not armstrong number",temp);
}
    return 0;
}