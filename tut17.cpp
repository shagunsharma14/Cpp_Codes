#include<iostream>
using namespace std;
// inline int product(int a, int b)
// {
//     return a*b;
// }
int moneyrecived(int money, float factor = 1.06)
{
    return money * factor;

}


int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of two numbers is : "<<product(a,b)<<endl;
    int money;
   cout<<"Enter the amount of money: "<<endl;
   cin>>money;
   cout<<"Your money "<<money<<" after 1 year will be: "<<moneyrecived(money)<<endl;
   cout<<"VIP money "<<money<<" after 1 year will be: "<<moneyrecived(money,1.10)<<endl;



    
    return 0;
}