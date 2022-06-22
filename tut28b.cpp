#include <iostream>
using namespace std;

class C2;
class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(C1 &x, C2 &y)
{
    int temp;

    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    C1 oc1;
    C2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    cout << "The value after exchanging becomes: ";
    oc1.display();
    cout << "The value after exchanging becomes: ";
    oc2.display();

    return 0;
}