#include<iostream>
using namespace std;

class Car{
    private:
    int carId;
    int *pointer;
    public:
    int price;
    string name;
    bool isAutomatic;
    Car(int p, string n, bool a){
       this->price=p;
        this->name=n;
        this->isAutomatic=a;
        pointer=new int();

    }

    Car(Car &orginalObj){
        this->price=orginalObj.price;
        this->name=orginalObj.name;
        this->isAutomatic=orginalObj.isAutomatic;
        pointer=new int();
        *pointer=*(orginalObj.pointer);
    }

    //destructor to free dynamically allocated memory(memory with new keyword):
    ~Car(){
        cout<<"Destructor called"<<endl;
        delete pointer;
    }

    void setCarId(int id){
       *pointer=id;
 
    }

    int getCarId(){
        return *pointer;
    }

    void printDetails(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Price: "<<this->price<<endl;
        cout<<"Automatic: "<<this->isAutomatic<<endl;
        cout<<"Car ID: "<<this->getCarId()<<endl;
    }




};
    
int main()
{
    Car c1(1000000,"Mercedes",true);
    // c1.setCarId(101);
    //c1.printDetails();

    //default copy constructor
    Car c2(c1);

    c2.setCarId(102);
    c2.printDetails();
    return 0;
}