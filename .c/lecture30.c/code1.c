#include<stdio.h>
int palandrom(int arr[] , int i,int j){
    if(i>=j){
        return 1;

    }
    if(arr[i] != arr[j]){
        return 0;

    }
    return palandrom(arr,++i,--j);
}
int main(){
int arr[3]={1,2,1};

palandrom(arr,i,j);
}