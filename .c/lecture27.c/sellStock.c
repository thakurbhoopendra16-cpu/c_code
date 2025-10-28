#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={6,3,0,9,1};
    int min = INT_MAX;
    int max=0;
    for(int i=0 ; i<6 ;i++ ){
      if(arr[i]<min){
        min=arr[i];
      }
      else{
      int profit=arr[i]-min;
      if(profit>max){
        max=profit;
      }
      }
    }printf("%d " , max);
   
}