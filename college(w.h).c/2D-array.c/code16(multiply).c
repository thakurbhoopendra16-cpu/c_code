#include<stdio.h>
int main()
{
    int arr[2][2]={{1,2} , {3,4}};
    int brr[2][2]={{1,2} , {3,4}};
    for(int i =0 ; i<2 ; i++ )
    {
        for(int j=0 ; j<2 ; j++){
        printf("%d %d  " , arr[i][j] , brr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    int m=2;
    
    for(int i =0 ; i<2 ; i++ )
    {
        for(int j=0 ; j<2 ; j++){
        int res[i][j] ;
         //multiplication
         for(int k=0 ; k<m ; k++){
            res[i][j] = res[i][j]+ arr[i][k]*brr[k][j];
            
         } printf("%d " , res[i][j]);
         } printf("\n");
        } 

       
    }
    //nice 
  
   