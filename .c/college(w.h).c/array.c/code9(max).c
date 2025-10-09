#include<stdio.h>
int main ()
{
    int arr[5]={1,34,54,23,25};
    int max=0;
    for(int i = 0 ;i<=5 ; i++ )
    {
      if(max<arr[i]){
      max=arr[i];
     
      }
      
    }
     printf("%d " , max);
}