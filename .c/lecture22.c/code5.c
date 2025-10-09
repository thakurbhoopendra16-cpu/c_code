#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"bca"};
    int ln=strlen(str);
    char result;

    for(int i=0 ; i<ln-1 ; i++){
        for(int j = i+1 ; j<ln ; j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                result=str[j];
            }
        }printf("%c" ,result );
    }
}