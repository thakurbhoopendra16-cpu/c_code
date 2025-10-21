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
    struct Student s1[3];
    
    //name

    for(int i =0 ; i<3 ; i++){
        printf("enter the name:%d" , i);
        scanf("%s" ,&s1[i].name);
    }
    for(int i =0 ; i<3 ; i++){
        printf("%s\n" ,s1[i].name );
    }

    //age

    for(int i =0 ; i<3 ; i++){
        printf("enter the age:%d" , i);
        scanf("%d ", &s1[i].age);
    }
    for(int i =0 ; i<3 ; i++){
        printf("%d\n" ,s1[i].age );
    }
    
}