#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
using namespace std;


struct node{
	int data;
	node *next;
};

node *first , *temp , *ttemp , *p;

void inti(){
	first = temp = ttemp = null;
}

void createfirst(int val){
	first= new node;
	first -> next = null;
	first -> data = val;
}

void addnode(int val){
	temp = first;
	while(temp ->next != null){
		temp=temp->next;
	}
	ttemp= new node;
	ttemp->data=val;
	ttemp->next=null;
	
	temp->next=ttemp;
}

void disp(){
	temp=first;
	while(temp!=null){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

void delLast(){
	temp = first;
    while(temp->next -> next != null){
          ttemp = temp ;
        temp=temp->next;
          
    }
    p=temp->next;
	 ttemp ->next = p;
      delete temp;

}

int main(){
	createfirst(10);

	addnode(20);
    addnode(30);
	addnode(40);
	addnode(50);
	delLast();
	disp();
	
	
}