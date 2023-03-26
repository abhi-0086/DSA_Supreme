#include <bits/stdc++.h>
using namespace std;

void replaceSpace(char sentence[])
{
    int length = strlen(sentence);
    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}
int main()
{
    char sentence[100];
    cin.getline(sentence, 100);
    cout << "Original String " << sentence << endl;
    replaceSpace(sentence);
    cout << "Replaced spaces : " << sentence << endl;
    return 0;
}