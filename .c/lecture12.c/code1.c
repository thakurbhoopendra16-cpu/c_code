#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};


   // 1. printf("%d" , arr[1]);


  //2. for (int i=4 ; i<=arr ; i--)
  // {
  //  printf("%d \n" ,arr[i] ); 


// 3...int sum =0;
//   for (int i =0 ; i<5 ; inti++)
//   {
//     sum=sum+arr[i];
//   }
//  printf("%d\n" , sum);
// 

// 4.... int max=arr[0];
// for (int i=0 ; i<5 ; i++){

//  if (arr[i]>max)
//  {max=arr[i];
// }
// }
// printf("%d" , max);


int target;

for(int i=0 ; i<5 ; i++)
{
if (arr[i]==target)
{
  printf("true");
}
else 
{
  printf("false");
}
}








}
