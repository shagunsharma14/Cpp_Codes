#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // // cout<<"the value of a is: "<<a<<endl;
    // float a = 34.6;
    // cout<<"The value of a is : "<<a<<endl;
    //  a = 45.3;
    // cout<<"The value of a is : "<<a<<endl;
    // ***** Manipulators ****
    // int  a = 3;
    // int  b = 78;
    // int  c= 1233;
    // cout<<"The value of a is:"<<setw(4)<<a<<endl;
    // cout<<"The value of b is:"<<setw(4)<<b<<endl;
    // cout<<"The value of c is:"<<setw(4)<<c<<endl;
    // cout<<"The value of a is:"<<a<<endl;
    // cout<<"The value of b is:"<<b<<endl;
    // cout<<"The value of c is:"<<c<<endl;
    // cout<<"The value of c is: "<<a<<endl;
    //**** Operator Precedence*****
    int a = 3, b = 4; 
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}