#include<stdio.h>
int main(){
    int sum=97;
    for (int i = 0; i <5; i++)
    {
        for (int j = 4; j > i; j--)
        {
          printf(" ");
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