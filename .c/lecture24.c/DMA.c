#include<stdio.h>
#include<stdlib.h>
int main(){

int n ;
printf("Enter the size:");
scanf("%d" , &n);
int *arr = (int *)malloc(n * sizeof(int));   //it provide dynamic space
printf("enter %d element : \n" , n);
for(int i =0 ; i<n ; i++){
    scanf("%d" , &arr[i]);

    printf("Enter %d size:");
    int newSize;
    scanf("%d" , &newSize);
    arr=(int *)relloc(n * sizeof(int));
    printf("enter %d element:\n" , newSize);
    for(int j=0 ; j<newSize ; j++){
        scanf("%d" , &arr[j]);
        printf("enter %d size");
    }
   
  free(arr);
}
}