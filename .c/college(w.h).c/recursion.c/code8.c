//print sum from 1 to n (return type)

#include<stdio.h>
int sumofn(int n){
    if(n==0) return 0;
   
    return n+sumofn(n-1);
    
}


int main(){
    int n;
    printf("enter the n:");
  scanf("%d" , &n);
    int sum=sumofn(n);
     printf("%d \n " , sum);
}
