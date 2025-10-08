#include<iostream>
using namespace std;

class polyMorphism{
    public:
    void display(){
        cout<<"This is non-parametrized constructor"<<endl;
    }

    void display(string name){
        cout<<"This is parametrized constructor: "<<name<<endl;
    }
};


    
int main()
{
    polyMorphism p;
    //p.display();
    p.display("Hello World");
    return 0;
}