//Find Kth max and kth min

#include<stdio.h>
int main(){
    int arr[]={5,3,2,6,7,4};
    for(int i =0 ; i<6 ; i++)
    {
        int temp = 0;
        for(int j=i+1 ; j<6 ; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    
    }
    int n ;
    printf("Enter a number");
    scanf("%d" , &n);
    printf("%d largest number is %d" , n , arr[6-n]);
}