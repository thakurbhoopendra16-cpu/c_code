#include<stdio.h>
int main(){
    int arr[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int maxarea=0;
    while (i<j)
    {
        int h;
        if (arr[i]<arr[j])
        {
           h=arr[i];
        }
        else
        {
            h=arr[j];
        }
        int w=j-i;
        int area=h*w;
        if (area>maxarea)
        {
            maxarea=area;
        }
        if (arr[i]<arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
     printf("%d",maxarea);
}