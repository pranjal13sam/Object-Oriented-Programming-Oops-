// SINGLE LEVEL INHERITANCE

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int a,b;

//     A(){
//         cout<<"This is parent class constructor"<<endl;
//     }
    

// };

// class B:public A{
//     public:
//     int c;

//     B(int x,int y,int z){
//         a=x;
//         b=y;
//         c=z;
//         cout<<"This is child class constructor"<<endl;
//     }
//     void display(){
//         cout<<"a: "<<a<<endl;
//         cout<<"b: "<<b<<endl;
//         cout<<"c: "<<c<<endl;
//     }

// };
    
// int main()
// {
    
//     B obj1(10,20,30);
//     obj1.display();
//     return 0;
// }


// MULTILEVEL INHERITANCE:

#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(string name,int age){
        this->name=name;
        this->age=age;
    }

};

class collegeStudent: public student{
    public:
    int roll_no;
    collegeStudent(string n,int a,int r):student(n,a){
        this->roll_no=r;
    }
};

class gradStudent:public collegeStudent{
    public:
    string field;

    gradStudent(string f,string name,int age,int roll_no): collegeStudent(name,age,roll_no){
        field=f;
    }

    void printDetails(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"ROLL NO: "<<roll_no<<endl;
        cout<<"FIELD: "<<field<<endl;
    }
};
    
int main()
{
    gradStudent g1("Computer Science","John",101,21);
    g1.printDetails();
    return 0;
}