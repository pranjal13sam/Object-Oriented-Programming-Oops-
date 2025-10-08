#include<iostream>
using namespace std;


class A{
    public:
    int a,b;

    void operator+(A &obj)//operator overloading
    {
        int val1=this->a;
        int val2=obj.a;
        cout<<"Output: "<<val2-val1<<endl;
    }
};

//  But here, both obj1 and obj2 are objects, not numbers.
// C++ doesn’t know how to add two objects automatically, 
//so you are telling C++ what to do when + is used with objects of class A.
    
int main()
{
    A obj1,obj2;
    obj1.a=10;     // this->a = obj1.a = 10
    obj2.a=20;    // obj.a = obj2.a = 20
    obj1+obj2;    //20-10=10
    return 0;
}