#include <stdio.h>

int main(){
    int num=123;
    int sum=0;
    while (num>0)
    {
       int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;
    }
    printf("%d",sum);
}