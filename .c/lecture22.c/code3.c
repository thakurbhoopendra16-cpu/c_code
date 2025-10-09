#include<stdio.h>
#include<string.h>

int main(){
    char str[]={"abcrtgb"};
    char target='c';
    int ln=strlen(str);

    for(int i ; i<ln ; i++){
        if(str[i]==target){
            printf("true");
        }
        else{
            printf("false");
        }
    }
}