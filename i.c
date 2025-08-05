#include<stdio.h>
int main(){
 int n,c,i;
 printf("Enter n: ");
 scanf("%d" ,&n);
 int a=2,b=3;
 printf("%d %d ",a,b);
 for(i=3;i<=n;i++){
    c=a*b;
    printf("%d ",c);
    a=b;
    b=c;
 }
}
