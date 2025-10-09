#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"hbdcasdwaed"};
    int ln= strln(str);
    int min=0;
    int result;
    int freq[256]={0};

    for(int i ; i<ln ; i++)
    {
        freq[str[i]]++;
    }

    for(int i ; i<ln ; i++){
        if (min>freq[str[i]])
        {
            min=freq[str[i]];
            result=str[i];
        }
        
    }printf("%c->%d" , result , min);

}