#include <iostream>
using namespace std;

int sum = 0;
void printNum(int n, int lastNum)
{
    if (n <= lastNum)
    {
        cout << n << " ";
        sum = sum + n;
        n++;
        printNum(n, lastNum);
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
        return n * factorial(n - 1);
   
}

int powerOf(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * powerOf(n - 1);
}

int main()
{
    int n = 1, lastNum = 10;
    // printNum(n, lastNum);
    // cout<<"\n"<<sum;

    cout << factorial(5);
//    cout<< powerOf(10);

    return 0;
}