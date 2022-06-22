//Multiplication Table
#include<iostream>
using namespace std;
int main()
{
    int num = 1;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i =1; i<=10; i++)
    {
        num = n*i;
        cout<<n<<" X "<<i<<" = "<<num<<endl;
        
    }
    return 0;

}