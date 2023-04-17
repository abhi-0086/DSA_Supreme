#include<bits/stdc++.h>
using namespace std;

void print_subsequences(string input, string output, int ind)
{
    //base case
    if (ind >= input.length())
    {
        cout << output << endl;
        return;
    }
    //exclude current character
    print_subsequences(input, output, ind+1);

    //include current character
    output.push_back(input[ind]);
    print_subsequences(input, output, ind+1);
}

int main()
{
    string input = "abc";
    string output = "";
    print_subsequences(input, output, 0);
    return 0;
}