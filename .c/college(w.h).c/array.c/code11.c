//sum of even elements and sum of odd elements and sumeven-sumodd
#include<stdio.h>
int  main()
{
    int arr[8]={1,2,5,6,8,4,9,12};
    int sumeven=0;
    int sumodd=0;
    for(int i=0 ; i<8 ; i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+arr[i];
           
        }
        else{
            sumodd=sumodd+arr[i];
           
        }

    }  printf("%d " , sumeven);
     printf("%d " , sumodd);
}