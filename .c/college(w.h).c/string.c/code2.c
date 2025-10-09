#include<stdio.h>
int main()
{
    char arr[]="Hello global \0";
    int i=0;
    while(arr[i] != '\0'){
        printf("%c" , arr[i]);
        i++;
    }
    
}