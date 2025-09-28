#include<stdio.h>

 int sum(int a , int b){
   int sum=0;
   sum=a+b;
}
    


int main(){
    int a, b;
    printf("enter  a :");
    scanf("%d" , &a);
    printf("enter  b:");
    scanf("%d" , &b);
    int datatype = sum(a,b);
    printf("%d " , datatype);
    // doubt h thoda check kar lina

    
}