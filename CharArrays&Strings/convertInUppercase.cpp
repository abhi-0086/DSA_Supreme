#include <bits/stdc++.h>
using namespace std;
void toUppercase(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
            str[i] = str[i] - 'a' + 'A';
    }
}
int main()
{
    char str[100];
    cout << "Enter String : ";
    cin.getline(str, 100);
    cout << "Before conversion :" << str << endl;
    toUppercase(str);
    cout << "After Conversion : " << str << endl;
    return 0;
}