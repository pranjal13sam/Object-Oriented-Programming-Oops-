#include<iostream>
using namespace std;

class A{
    public:
    
    void show(){
        cout<<"Parent Class function"<<endl;
    }
    virtual void display(){
        cout<<"This is parent class display function"<<endl;
    }
};

class B:public A{
    public:
    void show(){
        cout<<"Child Class function"<<endl;
    }
    void display(){
        cout<<"This is child class display function"<<endl;
    }
};
    
int main()
{
    
    B obj;
    A obj2;
    obj.show();
    obj.display();
    
    return 0;
}