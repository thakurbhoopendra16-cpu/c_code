#include<stdio.h>
int main(){
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
          printf(" ");
        }
        for ( int k = 4; k > i; k--)
        {
        printf("*");
        }
        for ( int l = 4; l >= i; l--)
        {
        printf("*");
        }
        for ( int k = 0; k <= i; k++)
        {
        printf("*");
        }
        for ( int l = 1; l <= i; l++)
        {
        printf("*");
        }
        printf("\n");
    }
    
}