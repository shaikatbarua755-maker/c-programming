#include<stdio.h>
int main(){
 int marks[8],creditsum=0,i,sum_total=0;
 float credit[8],cgpa;
 for(i=0;i<=8;i++){
        int sum=0;
 printf("Enter all subjects marks : \n");
 scanf("%d",&marks[i]);
 printf("Enter credit hours of all subject :\n");
 scanf("%f",&credit[i]);
 creditsum += credit[i];
 if(marks[i]>=80){
    sum=sum+4;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
 else if(marks>=75 && marks<=79){
    sum=sum+3.75;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=70 && marks<=74){
    sum=sum+3.50;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=65 && marks<=69){
    sum=sum+3.25;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=60 && marks<=64){
    sum=sum+3.00;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=55 && marks<=59){
    sum=sum+2.75;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=50 && marks<=54){
    sum=sum+2.50;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=45&& marks<=49){
    sum=sum+2.25;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else if(marks>=40 && marks<=44){
    sum=sum+2.00;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
    else {
    sum=sum+0;
    sum=sum*credit[i];
    sum_total=sum_total+sum;}
 }
 cgpa=sum_total/creditsum;
 printf("%f is your cgpa",cgpa);
}
