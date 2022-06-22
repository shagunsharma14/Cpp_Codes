//Constructur
 

#include<iostream>
using namespace std;
class Complex
{
    int a, b;
    public:
    //creating a Constructor
  
    // Constructor is a special member function with same name as of the class. It is used to initializ the objects of its class
    // it is automatically invoke whenever a object is created
    Complex(void);// constructor declaration//This is a default constructure as it takes a 0 parameter
    void printNumber()
    {
        cout<<"Your number is " << a << " + " << b << "i"<<endl;
    }
};

Complex :: Complex(void)
{
    a = 5;
    b = 10;
    // cout<<"This is Sparta!!!";
}

int main()
{
    Complex c,d,e;
    c.printNumber();
    c.printNumber();
    c.printNumber();
    
    return 0;
}