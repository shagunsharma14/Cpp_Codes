#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    // & ---> (Address of ) operator
    cout<<"\nThe address of a is : "<<b<<endl;
    cout<<"\nThe address of a is : "<<&a<<endl;
    // * ---> (Value at ) operator
    cout<<"\nThe value at b  is : "<<*(&a)<<endl;
    cout<<"\nThe value at b  is : "<<*b;
    
    
    
    
    return 0;
}