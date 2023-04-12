#include<bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    //base case
    if(x==1)
        return 1;

    //recursive call
    int fact = factorial(x-1);
    int ans = x * fact;

    return ans;
}

int main()
{   
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;
}