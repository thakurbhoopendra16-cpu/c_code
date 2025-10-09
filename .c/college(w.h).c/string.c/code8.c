 //shallow copy//

#include<stdio.h>
#include<string.h>
int main(){
     char s1[]= "Physics wallah";
     char *s2 = s1;
     s1[0]='C';
     printf("%s" , s2);
     
      //calculate its size
      
    //   char s1[]= "Physics Wallah";
    //   int size=0;
    //   int i=0;
    //   while ( s1[i] != '\0'){
    //     i++;
    //     size++;
    //   }
    //    printf("%d" , size);
}