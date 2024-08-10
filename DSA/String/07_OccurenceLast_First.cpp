#include <iostream>
#include <vector>

using namespace std;
int firstOccurence(string str, char ch)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count++;
        if (str[i] == ch)
        {
            return count;
        }
    }
    cout << endl;
}

int lastOccurence(string str, char ch)
{
    int count = str.length();
    for (int i = str.length(); i >= 0; i--)
    {
        if (str[i] == ch)
        {
            return count;
        }
        else
            return -1;
        count--;
    }
    cout << endl;
}

vector<int> findOccurenceLast(vector<int> arr, int target)
{
}

int toBinary(int arr[], int size, int num)
{
    int idx = 0;
    while (num > 0 && idx < size)
    {
        arr[idx] = num % 2;
        num = num / 2;
        idx++;
    }
    return idx;
}

int main()
{
    string str = "bacdefbad";
    char ch = 'a';

    int a[7] = {1, 2, 5, 8, 8, 4, 6};
    int tr = 8;

    // cout << firstOccurence(str, ch);
    // cout<<endl;
    // cout << lastOccurence(str, ch);

    int A = toBinary(a, 7, 0);
    // printing conversion in binary numbers
    for (int i = A - 1; i >= 0; i--)
    {
        cout << a[i]<<" ";
    }

    return 0;
}