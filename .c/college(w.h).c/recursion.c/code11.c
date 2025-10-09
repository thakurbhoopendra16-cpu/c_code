// stair path by recursion(ab hame stair kaise chadna h vo bhi recursion batayega)....single and double step

#include<stdio.h>
int stairs(int n){
    if(n==1 || n==2) return n;
    return stairs(n-1)+stairs(n-2);
}


int main()
{
    int n;
    printf("enter the n:");
    scanf("%d " , &n);
    int stairways = stairs(n);
    printf("%d " , stairways );

}