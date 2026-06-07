#include<stdio.h>
int main(){
int start,end,digit,temp,remainder;
printf("Enter the start and end number: ");
scanf("%d %d",&start,&end);
for(int i=start;i<=end;i++){
    temp=i;
    remainder=0;
while(temp!=0){
    digit=temp%10;
    remainder=remainder+(digit*digit*digit);
    temp=temp/10;
}
if(remainder==i){
    printf(" %d ",i);
}
}
    return 0;
}