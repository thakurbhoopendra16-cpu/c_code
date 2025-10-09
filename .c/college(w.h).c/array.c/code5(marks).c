#include<stdio.h>
int main()
{
    int marks[5]={98,96,85,92,91};
    for(int i = 0 ; i<5 ; i++)
    {
        if(marks[i]<90){
            printf("%d " , marks[i]);
            
        }
    }
}