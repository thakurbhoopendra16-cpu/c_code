#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3} , {4,5,6} , {7,8,9}};
    
    for (int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++ )
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("transpose by swaping");

    printf("\n");
    printf("\n");
    int brr[3][3]={{1,2,3} , {4,5,6} , {7,8,9}};
    int temp;
    for (int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++ )
        {
           temp=arr[i][j];
           arr[i][j]=brr[j][i];
           brr[j][i]= temp;
           printf("%d " ,arr[i][j]  );
        }
        printf("\n");
    }

    printf("\n");
    printf("rotation at 90 degree");
    printf("\n");
    printf("\n");
    
    for (int i = 0 ; i<3 ; i++)
    {
        for(int j = 2 ; j>=0 ; j-- )
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }

}