
#include <iostream>
using namespace std;
void swap(int x, int y) // call by value
{
    int temp = x;
    x = y;
    y = temp;
    cout << "value of a during function call  " << x << endl;
    cout << "value of a during function call  " << y << endl;
}

void swapAgrain(int* c, int* d)//call by reference
{
    int temp = *c;
    *c = *d;
    *d = temp;
    cout << "value of a during function call  " << *c << endl;
    cout << "value of a during function call  " << *d << endl;
}
int main()
{
    int a = 10, b = 20;
    cout << "value of a before function call  " << a << endl;
    cout << "value of a before function call  " << b << endl;
    // swap(a, b);
    swapAgrain(&a,&b);
    cout << "value of a after function call   " << a << endl;
    cout << "value of a after function call   " << b << endl;

    return 0;
}