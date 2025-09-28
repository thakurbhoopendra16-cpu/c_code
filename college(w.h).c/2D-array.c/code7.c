#include<stdio.h>
#include<string.h>
int main()
{

char row[1][4] = {{ 'N' , 'P' , 'C' ,'M' }};
    for(int j = 0 ; j<4 ; j++){
      
      printf("%c  " , row[0][j]);
    
   
    }
     printf("\n");
    int arr[3][4]={{90,98,89,89} , {89,88,97,95} , {96,94,94,95}};
    for (int i =0 ; i<3 ;i++)
    {
        for (int j = 0 ; j<4 ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }


}