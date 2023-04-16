#include<bits/stdc++.h>
using namespace std;

void print_digits(int x)
{
    //base case
    if(x == 0)
        return;

    print_digits(x/10);
    cout << x%10 << " ";
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    print_digits(num);
    cout << endl;
}