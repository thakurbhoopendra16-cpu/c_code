#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rollno;
	float marks;
	
	
	student(string n , int r , float m){
		name=n;
		rollno=r;
		marks=m;
		
		
	}
};


int main()
{
  student s1("Vibha Singh Thakur" , 368 , 92.3);
  cout<<s1.name<<" "<<s1.rollno	<<" "<<s1.marks<<endl;
}