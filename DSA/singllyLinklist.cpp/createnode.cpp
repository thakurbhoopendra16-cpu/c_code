#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
using namespace std;
struct node
{
	int data;
	node *next;
};
node *first , *temp , *ttemp;

void init(){
	first=temp=ttemp=null;
}

void createfirst(){
	first=new node;
	first->next = null;
    cin>>first->data;
    cout<<first->data<<endl;
}


int main(){

	createfirst();
	init();
	
}