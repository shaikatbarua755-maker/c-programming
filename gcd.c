#include <stdio.h>
int findGCD(int a, int b) {
int gcd;
while(b!=0){
    int temp=b;
     b=a%b;
     a=temp;
}
 gcd=a;
 return gcd;
}
int main(){
 int num1,num2,gcd;
 printf("Enter two numbers : ");
 scanf("%d %d",&num1,&num2);
 gcd=findGCD(num1,num2);
 printf("The GCD of %d is %d\n",num1,num2,gcd);
 return 0;
}
