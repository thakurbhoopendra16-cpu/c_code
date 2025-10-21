#include<stdio.h>

struct adressss{
    int pincode;
};


struct Student{
  char name[50];
  int RollNo;
  int age;
  struct adressss s2;

};

int main(){
    struct Student s1;
    strcpy(s1.name , "lavinder");
    printf("Name  :%s \n" , s1.name);
    s1.age;
    printf("Age :%d \n" , 18);
    
    s1.RollNo;
    printf("Roll No :%d\n" , 3323);

    s1.s2.pincode;
    printf("Pincode:%d " , 482001 );

}