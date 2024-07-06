#include <iostream>
using namespace std;

int main()
{
    int *ptr, i = 0, a[] = {10, 20, 30, 40, 50};
    ptr = &a[0];
    while (i < 5)
    {
        cout << "Address : " << ptr << "  |   " << "Element : " << *ptr << endl;
        i++;
        ptr++;
    }

    return 0;
}