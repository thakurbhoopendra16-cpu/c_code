//power by algorithm

#include<stdio.h> 
int power(int a,int b){
   if(b==1) return a;
   int x = power(a,b/2)*power(a,b/2);
   if(b%2==0){
    return x;
   }
   else{
   return x*a;}

}

int main()
{
    int a;
    printf("enter the a:");
    scanf("%d " , &a);
    int b;
    printf("enter the b:");
    scanf("%d " , &b);
    int p =power(a,b);
    printf("%d " , p);

}