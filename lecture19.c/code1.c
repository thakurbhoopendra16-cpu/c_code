#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3];
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j =2 ; j>=0 ; j--)
        {
           brr[i][j]=arr[i][j];
            printf("%d " , brr[i][j]);
        }
       printf("\n");
}
    }