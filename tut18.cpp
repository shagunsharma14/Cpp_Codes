#include<iostream>
using namespace std;
// int factorial (int n)
// {
//     if(n == 1 || n==0)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }
int fib(int n)
{
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    // cout<<"The factorial of "<<n<<" is : "<<factorial(n)<<endl;
    cout<<"The value at "<<n<<"th position will be : "<<fib(n)<<endl;

    
    return 0;
}