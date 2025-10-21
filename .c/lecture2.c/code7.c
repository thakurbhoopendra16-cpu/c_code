#include<stdio.h>
int main ()
{
     int num = 5;
     printf("num = %d\n", num);
     printf("num++ = %d (post-increment)\n", num++); // print first, then increase
     printf("Now num = %d\n", num);
     printf("++num = %d (pre-increment)\n", ++num); // increase first, then print
     printf("Now num = %d\n\n", num);
}