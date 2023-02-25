#include <bits/stdc++.h>
using namespace std;
int lengthOfString(char arr[])
{
    int i = 0;
    int length = 0;
    while (arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cin.getline(name, 100);
    cout << "Length of String : " << lengthOfString(name) << endl;
    return 0;
}