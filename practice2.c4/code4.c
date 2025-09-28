#include<stdio.h>

void namaste();
void bonjung();

int main(){
    char ch;
    printf("enter I if indian and F if french:");
    scanf("%c" , &ch);
    if(ch == 'i'){
        namaste();
    }
    else{
        bonjung();
    }
}

void namaste(){
    printf("namaste vibha");
}

void bonjung(){
    printf("bonjung vibha");
}