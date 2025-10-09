#include<stdio.h>
int min(int a , int b )
{
  if (a<b)
  return a ;
  else 
  return b;
}
int gcf(int a , int b )
{
    for(int i=0 ; i<=min(a,b) ; i++)
    {
        if (a%i==0 && b%i==0){
        int hcf = i;
        }
    }
}



int main(){
    int a , b;
    printf("enter a :");
    scanf("%d" , &a);
    printf("enter b:");
    scanf("%d" , &b);
    int hcf =  gcf(a,b);
    printf("%d, %d" , a,b,hcf);

}