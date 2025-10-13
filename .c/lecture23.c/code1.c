//

#include<stdio.h>
int main(){
    int arr[]={5,3,2,6,7,-3,-7,-5,4};
    
    int negative[3];
    int positive[6];
    int res[9];
    int j=0;
    int k=0;

    for(int i =0 ; i<9 ; i++)
    {
        if(arr[i]<0){
            negative[j]=arr[i];
            j++;
        }
        else{
            positive[k]=arr[i];
            k++;
        }
        int index=0;
        for(int i =0 ; i<3 ; i++){
            res[index]=negative[i];
            index++;
        }
        for(int j = 0 ; i<6 ; j++)
        {
            res[index]=positive[j];
           index+=1;
        }
           printf("%d" , res[index]);

} 
    }//nice