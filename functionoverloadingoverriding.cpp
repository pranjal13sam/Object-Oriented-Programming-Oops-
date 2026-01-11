#include<iostream>
using namespace std;

//funciton(constructor) overloading:
class parent{
    public:
    int a,b,c;

    // parent(){
    //     cout<<"This is default constructor";
    //     a=0;
    //     b=5;
    // };
    // parent(int x,int y){
    //     a=x;
    //     b=y;
    // }
    // void display(){
    //     cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // }

    //fucnction overriding:
    void show(){
        cout<<"This is parent class"<<endl;
    }
   

};

class child: public parent{
    public:
    void show(){
        cout<<"this is child class"<<endl;
    }
} ;

    
int main()
{
   child c1;
   c1.show();
    return 0;
}