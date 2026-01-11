#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    A(int x,int y){
        a=x,b=y;
    };

    void set(int x,int y){
        this->a=x;
        this->b=y;
    }

    int get(){
        return this->a,this->b;
    }

    void printDetails(){
        cout<<"value of a: "<<this->a<<endl;
        cout<<"value of b: "<<this->b<<endl;
    }
};
    
int main()
{
    A a(4,5);

    a.set(8,9);
    a.get();
    a.printDetails();
    //copy constructor:
    A b(a);
    b.set(14,15);
    b.printDetails();
   


    return 0;
}