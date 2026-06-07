#include<stdio.h>
int main(){
int first=0,second=1,next,i,n;
printf("Enter the number of terms:");
scanf("%d",&n);
if(n==1){
    printf("%d",first);
}
else if(n==2){
    printf("%d",second);
}
else {
for(i=3;i<=n;i++){
    next=first+second;
   first=second;
   second=next;
}
}
printf("%d",second);
    return 0;
}