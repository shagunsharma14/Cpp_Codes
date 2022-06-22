#include<iostream>
using namespace std;

class employee
{   
    int id;
    int salary;
    public:
        void setId(void)
        {
            salary = 122;
            cout<<"Enter the Id of Employee: "<<endl;
            cin>>id;
        }
        void getId(void)
        {
            cout<<"The Id of this Employee is "<<id<<endl;
        }


};

int main()
{
    employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    employee fb[10];
    for(int i = 0; i<10 ; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }


    return 0;
}
