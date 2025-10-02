//find the count of number pair in given array whose sum is equal to x=12
#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,7,8,9};
    int k=8;
    int sum=0;
    for(int i =0 ; i<8 ; i++)
    {
        sum=sum+arr[i];
        if(sum==k){
            printf("%d " , sum);
        }
         printf("%d " , sum);
    }
     
}