// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,-3,4,-1};
//     int maxSum=0;

//     for (int i = 0; i < 5; i++)
//     {
//        int currSum=0;
//        for (int j = 0; j < 5; j++)
//        {
//           currSum=currSum+arr[j];
//           if (currSum>maxSum)
//           {
//            maxSum=currSum;
//           }
          
//        }
       
     
//     }
//     printf("%d" , maxSum);
// }
    


#include<stdio.h>
int main(){
int a[3]={1,2,3};
int b[3]={4,5,6};
int merge[6];
int i;
for (int i = 0; i <3 ; i++)
{
    merge[i]=a[3];
}

for(int j = 0; j<3 ; j++)
{
    merge[i]=b[3];
    i++;
}

for(int k =0 ; k < 6 ; k++)
{
    printf("%d" , merge[k]);
}
}
































