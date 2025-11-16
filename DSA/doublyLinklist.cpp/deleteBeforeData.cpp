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

void delBeforeData(int x){
   temp=first;
   while (temp->data!=x)
   {
    ttemp=temp;
    temp=temp->next;
   }
     p=ttemp->prev;
   

    p->next=temp;

   temp->prev=p;
   

   ttemp->prev=ttemp->next=null;
   delete ttemp;

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
     delBeforeData(30);
     disp();
}