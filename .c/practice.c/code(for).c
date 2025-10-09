#include<stdio.h>
int main()
{
   // 1. int i;        
   // for(i=1 ; i<=100 ; i++)
   // printf("%d \n" , i);


  // 2. int i , s ;
  // scanf("%d" , &s);
  // printf("enter the value of s:");
  // for (i=1 ; i<=10 ; i ++)
  // printf("%d \n " , i*s);    


  // 3. int i , n ;
  // printf("enter the number : ");
  // scanf("%d" , &n);
  // int sum = 0;
  // for(i=1 ; i<n ; i++)
  // {
  //   sum = sum+i;
  // }
  //   printf("%d \n" , sum );


  // 4. int i;
  // for (i=0 ; i<=5 ; i++)
  // {
  //   if (i == 3)
  //   {
  //     break;
  //   }
  //   printf("%d\n" , i);
  // }


  int n;
  do{
    scanf("%d" , &n);
    printf("%d\n" , n);
  
    if(n % 2 != 0)
    {
      break;
    }
  }
while(1);
  
  
}