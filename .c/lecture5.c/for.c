#include <stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<5;i++){
        sum=sum+i;
       

        printf("%d\n",i);

        printf("hello\n");
        printf("%d\n",i*2);
        if(i%2==1){
            printf("%d\n",i);
        }
}
}