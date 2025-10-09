#include<stdio.h>
int factorial(int x ){  
    int fact=1;
    for(int i=2 ; i<=x ; i++)
    fact=fact*i;
    return fact;
}


int main()
{
   int n = factorial(5);
    printf("%d" , n );
}