#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
using namespace std;

struct node {
    int data;
    node *next;
};

node *first, *temp, *ttemp, *p;

void inti() {
    first = temp = ttemp = null;
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
    cout << "All numbers:" << endl;
    while (temp != null) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
 
}

void printeven() {
    temp = first;
    cout << "Even numbers:" << endl;
    while (temp != null) {
        if (temp->data % 2 == 0)
            cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printOdd() {
    temp = first;
    cout << "Odd numbers:" << endl;
    while (temp != null) {
        if (temp->data % 2 != 0)
            cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    inti();
    createfirst(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);
    addnode(6);
    addnode(7);
    addnode(8);
    addnode(9); 
    addnode(10);

    printeven();
    printOdd();
    disp();
}