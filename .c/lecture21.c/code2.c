//print non repeative element or first non repeative only


#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"abc"};
    int freq[256]={0};
    int ln=strlen(str);

    for(int i=0 ; i<ln ; i++){
        freq[str[i]]++;
    
    }
    for(int i=0 ; i<256 ; i++)
    {
        if(freq[i]>0){
        printf("%c :%d \n" , i , freq[i]);}
    }
    int fount=0;
    for(int i=0 ; i<ln ; i++){
        if (freq[i]==0){

        }
    }
}