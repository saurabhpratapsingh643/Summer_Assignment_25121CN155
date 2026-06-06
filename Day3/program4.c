#include<stdio.h>
int main(){
int a,b,lcm,i,max;
printf("Enter two number:");
scanf("%d %d",&a,&b);
if(a<b)
  max=b;
  else
  max=a;
    while(1){
      if(max % a == 0 && max % b == 0){
      printf("LCM = %d",max);
      break;
      }
      max++;
    }
    return 0;
}