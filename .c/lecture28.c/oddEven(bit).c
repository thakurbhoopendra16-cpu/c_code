#include<stdio.h>
int main(){
    int n=5;
    if(n&1){          //it takes its binary number means 5=0101  and 0101*1=1010
        printf("even"); //if in last value is 0 the its even

    }
    else{
        printf("odd");  //if in last value is 1 the its even
    }
}