//delete

#include<stdio.h>
#include<string.h>

int main(){
    char str[]={"hello"};
    char target='e';
    char newstr[100];
    int ln=strlen(str);
    int j=0;

    for(int i =0 ; i<ln ;i++ ){
        if(str[i]!=target){
            newstr[j]=str[i];
            j++;
        }
         printf("%c" , newstr[j]);

    }
   
    
}