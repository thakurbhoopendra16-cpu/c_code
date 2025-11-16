#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
using namespace std;

struct node {
    int data;
    node *next;
};

node *first, *temp, *ttemp, *p , *prevN , *b , *a;

void inti() {
    first = temp = ttemp = p = prevN = a = b= null;
}

void createfirst(int val) {
    first = new node;
    first->next = null;
    first->data = val;
}

void addnode(int val) {
    temp = first;
    while (temp->next != null) {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = null;

    temp->next = ttemp;
}

void disp() {
    temp = first;
    while (temp != null) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}



void swapMN(int m , int n) {
   temp=first;
   while (temp->data != m)
   {
    ttemp=temp;
    temp=temp->next;
   }
   b=temp->next;
  p=first;
  while(p->data != n){
    prevN=p;
    p=p->next;

  }
  a=p->next;

  temp->next=a;
  prevN->next=temp;

 p->next=b;
 ttemp->next=p;
    }
    



int main() {
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    swapMN(20,50);
    disp();
    

    return 0;
}