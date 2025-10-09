//compression 

#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"abcabeha"};
    int freq[256]={0};
    int ln=strlen(str);

    for(int i=0 ; i<ln ; i++){
        freq[str[i]]++;
    
    }
    

    for (int i =0 ; i<256 ;i++ ){
        if (freq[i]>0){
            printf("%c%d" , i , freq[i]);
        }
    }

}