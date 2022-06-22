#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
         cin >>id;
         count ++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id<<endl
        << "And this is employee number: "<<count<<endl;
    }
};
int Employee :: count;

int main()
{
    Employee harry,rohan,lovish;
    harry.setData();
    harry.getData();
    rohan.setData();
    rohan.getData();
    lovish.setData();
    lovish.getData();
    return 0;
}