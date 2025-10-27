//n natural number by recursion
#include<stdio.h>
int natural(int n){
    if(n==0)
        return 1 ;
    
    int s=natural(n-1);
      printf("%d " , n);
     return (s);
    }
   


int main(){
    natural(10);
   
}