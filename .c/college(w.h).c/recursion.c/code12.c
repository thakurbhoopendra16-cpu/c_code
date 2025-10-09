// stair path 2 (single , double , triple steps)

#include<stdio.h>
int stairs(int n){
    if(n==1 || n==2 || n==3) return n;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}


int main()
{
    int n;
    printf("enter the n:");
    scanf("%d " , &n);
    int stairways = stairs(n);
    printf("%d " , stairways );

}