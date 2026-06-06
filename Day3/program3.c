#include<stdio.h>
int main(){
int i,a,b,gcd,min;
printf("Enter two number: ");
scanf("%d %d",&a,&b);
if(a<b)
  min=a;
  else
  min=b;
for(i=1;i<=min;i++){
    if(a%i==0 && b%i==0){
        gcd=i;
    }
}
printf("GCD of %d and %d is %d",a,b,gcd);
    return 0;
}