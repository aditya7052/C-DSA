#include <iostream>
using namespace std;

int main()
{
    // int arr[4] = {5, 6, 7, 8};
    // int *p = arr;
    // int *q = arr + 1;

    // cout << arr << endl;      // address
    // cout << &arr << endl;     // address
    // cout << arr[0] << endl;   // 5
    // cout << &arr[0] << endl;  // address
    // cout << p << endl;        // 104
    // cout << &p << endl;       // address
    // cout << *p << endl;       // 5
    // cout << q << endl;        // address
    // cout << &q << endl;       // address
    // cout << *q << endl;       // 6
    // cout << *(p) + 1 << endl; // 5+1
    // cout << *(p) + 2 << endl; // 5+2
    // cout << *(p) + 3 << endl; // 5+3

    // cout << *(p + 2) << endl; //[0+2]

    // cout << *(p + 4) << endl<<endl; //[0+4]   garbage

    // cout<<"Size of array : "<<sizeof(arr)<<endl;
    // cout<<"Size of p : "<<sizeof(p)<<endl;
    // cout<<"Size of pointer : "<<sizeof(*p)<<endl;  //base on compiler architecture

    // arr=arr+1;  // cann't update the base address value because this is constanst  pointer ,cann't change the symbol table
    // -----------------------------------------------------------------------------------------------------------
    char ch[10] = "Aditya";
    char* cptr=&ch[0];

    char *c = ch;
    cout << ch << endl;  //--->print intire string
    cout << *(ch+3) << endl;  //--->print intire string
    cout << &ch << endl;
    cout << ch[0] << endl;
    cout << &c << endl;
    cout << *c << endl; // *c= *(c+0)
    cout << c << endl;  //--->print intire string
    cout<<cptr<<endl;
    cout<<&cptr<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<cptr+2<<endl;
    cout<<*cptr<<endl;
    cout<<cptr+4<<endl;


    return 0;
}