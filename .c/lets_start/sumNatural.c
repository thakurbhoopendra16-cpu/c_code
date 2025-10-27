#include<stdio.h>
int main(){
    int n;
    printf("enter the n :");
    scanf("%d " , &n);
    int sum=0;
    for(int i = 0 ; i<=n ; i++)
    {
        sum=sum+i;
        printf("%d\n" , sum);
    }
    
}