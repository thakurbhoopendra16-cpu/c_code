#include<iostream>
using namespace std;
class person{
    public:
    int age;
    int salary;
    string name;

    //constructor
    person(string n , int s , int a ){
        name = n;
        salary = s;
        age = a;
    }

    //functions
    void change_age(int n){
      cin >>age;
      cout << "New age:"<<age<<endl;
    }

    void change_salary(int n){
        cin>>salary;
        cout <<"New salary:"<<salary<<endl;
    }

    
};



int main(){
    person p1("Amit" , 25000 , 25 );
  cout<<p1.name<<" "<<p1.salary	<<" "<<p1.age<<endl;
  void change_age();
  void change_salary();
  
}