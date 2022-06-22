#include<iostream>
using namespace std;
int main()
{
    // cout<<"This is tutorial 9";
    //*** Selection control statements ***
    // 1. if-else ,2. if-else ladder and 3. switch
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // if(age<18 && age>0)
    // {
    //     cout<<"You are not allowed"<<endl;
    // }
    // else if(age == 18)
    // {
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"you are not yet born";
    // }
    // else
    // {
    //     cout<<"you can come to party "<<endl;
    // }
    // 3. switch case
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18";
        break;
    case 22:
        /* code */
        cout<<"You are 22";
        break;
    case 2:
        /* code */
        cout<<"You are 2";                                                      
        break;

    
    default:
    cout<<"No special treatment";
        break;
    }

    return 0;
}