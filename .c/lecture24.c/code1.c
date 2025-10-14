#include<stdio.h>
int main(){
    int arr[]={-1,0,5,-2,0,3};
    int zero[2];
    int negative[2];
    int positive[2];
    int res[6];
    int j=0;
    int k=0;
    int l=0;

    for(int i =0 ; i<5 ; i++)
    {
        if(arr[i]<0){
            negative[j]=arr[i];
            j++;
        }
        else if(arr[i]==0){
            zero[l]=arr[i];
            l++;
        }
        else {
            positive[k]=arr[i];
            k++;
        }
        int index=0;
        for(int i =0 ; i<2 ; i++){
            res[index]=negative[j];
            index++;
        }
        for(int j = 0 ; i<2 ; j++)
        {
            res[index]=positive[k];
           index+=1;
        }
           printf("%d" , arr[i]);

} 
    }//nice