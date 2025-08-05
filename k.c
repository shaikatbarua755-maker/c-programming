#include<stdio.h>
int main(){
  int arr[5] = {1,2,3,2,1};
  int i,flag=1;

    for(i=0;i<5/2;i++)
     {
         if(arr[i]!=arr[5-i-1])
            {
                flag=0;
                break;
            }
     }
     if(flag==1)
    {
        printf("string is palindrom");
    }
    else if(flag==0)
        {
        printf("string is not palindrom");
    }
}
