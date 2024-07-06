#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello world";
    // int count=1;
    string str1 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str1 = str1 + str[i];
        }
        else
            str1 = str1 + "@9";
    }
    cout << str1;

    return 0;
}

// occuring character in an input string 
// replace words on a specific index or " " space
// remove all occurrences of a substring