//intersection

#include<stdio.h>
int main(){
    int arr[]={2,4,6,8,13,22};
    int brr[]={8,5,3,4,2,13};
    int larg;
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(brr)/sizeof(brr[0]);

    if(m>n){
        larg = m ; 

    }else
    {
        larg=n;
    }
        
        for(int i =0 ; i<larg ; i++){
            for(int j = 0 ; j<larg ; j++){
                if(arr[i]==brr[j]){
                  printf("%d " , arr[i]);
                }
            }
        }
        
        
    
}