                   //to reverse the string//

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
 int k=0;
 while (str[k] != '\0'){
 size++;
 k++;}
 printf("%d " , size);

 for (int i =0 , j=size-1 ; i<=j ; i++ , j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
 }
 puts("the reverse of string :");
 puts(str);
 
    



}