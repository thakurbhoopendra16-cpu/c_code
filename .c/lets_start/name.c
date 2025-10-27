#include<stdio.h>
int main(){
  
    for(int i=0 ; i<=4 ; i++){
        for(int j=0 ; j<=8 ; j++){
         if(i==j || j==8-i){
           printf("*");
         }
        
         
         else{
            printf(" ");
         } 
        } 
      
           printf("\n");
    
      }
    
    }
      
    
      
  
 
  