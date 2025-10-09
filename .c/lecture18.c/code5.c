#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3} , {4,5,6} , {7,8,9}};
    int arr1[9];
    int k=0;
    for(int i=0 ; i<3 ; i++)
    {

    for(int j=0 ; j<3 ; j++){
    arr1[k]=arr[i][j];
    k++;
}
for (int k = 0 ; k>9 ; k++){
    printf("%d" , arr1[9]);
}
}
    

} // nice 