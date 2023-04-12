#include<bits/stdc++.h>
using namespace std;

//recursive function to print reverse counting
void reverse_count(int x)
{
    //base case
    if(x == 0)
        return;

    //processing
    cout << x << " ";

    //recursive call
    reverse_count(x-1);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    reverse_count(n);
    cout << endl;
    return 0;
}