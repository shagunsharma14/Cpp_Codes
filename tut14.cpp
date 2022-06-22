#include<iostream>
using namespace std;
 struct employee
{
    int eId;
    char favChar;
    float salary;
};

    union money
    {
        int rice;
        char car;
        float pounds;

    };
    

int main()
{
   struct employee harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is: "<<harry.eId<<endl;
    cout<<"The value is: "<<harry.favChar<<endl;
    cout<<"The value is: "<<harry.salary<<endl;

    union money m1;
    m1.rice = 34;
    



    return 0;


  
}