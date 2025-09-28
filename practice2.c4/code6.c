#include<stdio.h>

void calculateprice(float value);

int main(){
    float value = 100.00;
    calculateprice(value);
   

}

void calculateprice(float value){
    value= value +( 0.18*value);
    printf("%d" , value);
}