#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"abcbbbbb"};
    char subStr[]="abc";
    if(strstr(str,subStr)==NULL){
        printf("true");

    }else{
        printf("false");
    }
}