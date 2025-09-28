#include<stdio.h>

void printable(n);

int main(){

    int n;
    printf("enter n");
    scanf("%d" , &n);
    printable(n);
    
}

void printable(n){
    for (int i = 0; i <=10; i++)
    {
        printf("%d \n", i*n);
    }
    

}