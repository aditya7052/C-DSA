#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "aadity";
    string s2 = "diyaat";
    // cout << isAnagram(s1, s2);
    cout << isAnagram(s1, s2);

    return 0;
}