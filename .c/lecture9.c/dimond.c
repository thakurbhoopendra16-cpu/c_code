#include<stdio.h>
int main(){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 8; j > i; j--)
        {
          printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
          printf("*");
        }
        for (int l = 0; l <= i; l++)
        {
          printf("*");
        }
        printf("\n");
      }
      for (int i = 0; i < 8; i++)
    {
      for (int m = 0; m <= i; m++)
         {
          printf(" ");
        }
        for (int n = 8; n >i ; n--)
        {
            printf("*");
        }
        for (int o = 8; o > i; o--)
        {
          printf("*");
        }
        printf("\n");
    }
}