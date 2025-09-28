#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3}, {4,5,6} , {7,8,9}};
      
    for(int j = 0 ;j<3 ; j++)
    {
     
             int sum=0;
          
        
        for(int i =0 ; i<3 ; i++)
        {
             
            sum = sum + arr[i][j];
        }  
        
          printf("%d" , sum);
         printf("\n");
    }
      
   

}