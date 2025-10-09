//multi print by recursion

#include<stdio.h>
void greeting(int n){
    if (n==0) return;
    printf("hello vibha!\n");
    greeting(n-1);
     return;
}


int main()
{   
    int n;
    printf("enter the n:\n");
    scanf("%d " , &n);
    greeting(n);



}