#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 puts("enter the line");//puts is just like printf

 gets(str);  //just like scanf                    // "%[^\n]s"  we can use this instead

 //size

 puts("The size of string:");                      // puts automatically "\n" de deta h

 int size=0;
 int i=0;
 while (str[i] != '\0'){
 size++;
 i++;}
printf("%d " , size);        



}