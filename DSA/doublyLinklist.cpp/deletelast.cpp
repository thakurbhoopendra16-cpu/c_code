#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define null 0

using namespace std;

struct node{
    int data;
    node *next,*prev;
};
node *temp, *p , *ttemp , *first;
void init(){
    temp=ttemp=p=first=null;
}
void create_first(int val){
    first=new node;
    first->data=val;
    first->next=null;
    first->prev=null;
}

void addNode(int val){
    temp=first;
    while(temp->next != null){
     temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=val;
    ttemp->prev=temp;
    ttemp ->next=null;
    temp->next=ttemp;
}

void deletelast(){
   temp=first;
   while (temp->next!=null)
   {
    ttemp=temp;
    temp=temp->next;
   }
   ttemp->next=null;
   
   

   temp->prev=temp->next=null;
   delete temp;

}


void disp(){
	temp=first;
	while(temp!=null){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

int main(){
    init();
     create_first(10);
     addNode(20);
     addNode(30);
     addNode(40);
     addNode(50);
     deletelast();
     disp();
}