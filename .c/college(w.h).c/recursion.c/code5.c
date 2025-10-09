//increasre by recursion call

#include<stdio.h>
void incresing(int n){
    if (n==0) return ;
   
    increasing(n-1);
     printf("%d \n" , n);
    return ;
    
}


int main()
{
    int n ;
    printf("enter the n:");
    scanf("%d" , &n);
   increasing(n);
    
}