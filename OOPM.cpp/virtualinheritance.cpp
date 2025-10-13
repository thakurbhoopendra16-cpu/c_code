#include<iostream>
using namespace std;
class MyFriend{
    public:
virtual void MyShoes()=0;
};
class Me:public MyFriend
{
    public:
    void MyShoes() override{
    cout<<"this is my shoes now";
    }
};

int main(){
    Me m;
    m.MyShoes();
}