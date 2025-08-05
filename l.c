#include<stdio.h>
int main(){
 int num,sum=0,temp,rem;
   printf("Enter any number : ");
   scanf("%d",&num);
   temp=num;
   while(temp!=0){
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
   }
  if(num==sum){
   printf("number is armstrong");
  }
  else{
    printf("number is not armstrong");
  }







}
