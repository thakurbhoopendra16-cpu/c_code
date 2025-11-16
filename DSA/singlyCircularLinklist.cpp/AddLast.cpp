# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<iostream>
# define null 0
  
  using namespace std ;
  
   struct SCLL{
   	int data;
   	SCLL *next ;
   };
   SCLL * first,* temp,* ttemp,*p;
   
void createfirst(int val) 
{
	first=new SCLL;
	first->data = val;
	first->next=first;
}
void addnode(int val)
{
	temp=first;
	while(temp->next!=first){
		temp=temp->next;
	}
	ttemp=new SCLL;
	ttemp->data=val;
	ttemp->next=first;
	temp->next=ttemp;
}

void addLast(int x){
    temp=first;
    while (temp->next != first)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=new SCLL;
    p->data=x;
    temp->next=p;

   p->next=first;
    
}

void disp(){
	temp=first;
	cout<<temp->data<<endl;
	temp=temp->next;
	
		while(temp!=first)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	createfirst(10);
	addnode(20);
	addnode(30);
	addnode(40);
    addnode(50);
    addLast(60);
	disp();
}