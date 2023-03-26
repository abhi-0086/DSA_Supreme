#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;
        i++, j--;
    }
    return true;
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    if (isPallindrome(str))
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;
    return 0;
}