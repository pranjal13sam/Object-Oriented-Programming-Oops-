#include<iostream>
using namespace std;

class Car{
    private:
    int carId;
    public:
    int price;
    string name;
    bool isAutomatic;
    Car(int p, string n, bool a,int id=0){
       this->price=p;
         this->name=n;
            this->isAutomatic=a;

    }

    //custom copy constructor
    Car(Car &orginalObj){//hum yaha jo v change karenge vo hamara dono constructors me reflect hoga kyuki humne obj ka reference pass kiya hai
        this->price=orginalObj.price;
        this->name=orginalObj.name;
        this->isAutomatic=orginalObj.isAutomatic;
        this->carId=0;//agar hum yaha carId ko 0 na kare to dono objects ka carId same ho jayega
    }

    void setCarId(int id){
        this->carId=id;
    }

    int getCarId(){
        return this->carId;
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
     c1.setCarId(101);
     c1.printDetails();

    //default copy constructor
    //this is also called shallow copy constructor
    Car c2(c1);
    c2.setCarId(102);
    c2.printDetails();
    return 0;
}