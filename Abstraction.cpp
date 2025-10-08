#include<iostream>
using namespace std;


// What is a Pure Virtual Function?

// A pure virtual function is a virtual function with no definition (no body) in the base class.
// It is meant to be overridden by derived classes.

// In other words, it’s like saying:

// “Hey, every class that inherits from me must write its own version of this function!”


// Why do we need Pure Virtual Functions?

// They are used when:

// You want to create a base class that only provides a common interface,
// not actual implementation.

// You want all derived classes to implement that function in their own way.

// This type of class (which has at least one pure virtual function) is called an Abstract Class.

class Shape{
    public://pure virtual functions are automatically abstract functions
    virtual void draw()=0;//pure virtual function
};

// we cannot create object of abstract class
// so in order to use it we have to inherit it and define the pure virtual function in derived class  
// for dry run you can comment the draw function in derived class and see the error
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
    
int main()
{
    Circle c;
    c.draw();
    return 0;
}