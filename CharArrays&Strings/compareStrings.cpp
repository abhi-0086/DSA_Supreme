#include <bits/stdc++.h>
using namespace std;
bool compareString(string a, string b)
{
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    string str1 = "Love";
    string str2 = "Lover";
    if (compareString(str1, str2))
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    return 0;
}