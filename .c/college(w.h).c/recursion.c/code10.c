// fibbonaci series 

#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans1=fibo(n-1);
    int ans2 = fibo(n-2);
    int result= ans1+ans2;
    return result;
}


int main()
{
    int n;
    printf("enter the n:");
    scanf("%d " , &n);
    int fabinno = fibo(n);
    printf("%d " , fabinno );

}