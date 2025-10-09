#include<stdio.h>
int main()
{
    for(int i=0 ; i<5 ; i++)
    {
        for(int j = 0 ; j<=i ; j++){
        printf("*");
        }
        for(int k = 3 ; k >= i ; k--){
            printf(" ");
        }
        for(int m = 3 ; m >= i ; m--)
        {
            printf(" ");
        }
        for(int l = 0 ; l<=i ; l++) {
        printf("*") ;
        }
        printf("\n");
    }
       for(int i=0 ; i<5 ; i++)
    {
        for(int j = 3 ; j>=i ; j--){
        printf("*");
        }
        for(int k = 0 ; k<=i ; k++){
            printf(" ");
        }
        for(int m = 0 ; m <= i ; m++)
        {
            printf(" ");
        }
        for(int l = 3 ; l>=i ; l--) {
        printf("*") ;
        }
        printf("\n");
    }
}
    
