#include<bits/stdc++.h>
using namespace std;

int climb_stairs(int n)
{
    //you can either climb  1 or 2 steps at a time
    //base case
    if(n == 0 || n == 1)
        return 1;

    //recursive call
    //we can reach nth step from (n-1) or (n-2) steps
    return climb_stairs(n-1) + climb_stairs(n-2);
}

int main()
{
    int steps;
    cout << "Enter total number of steps : ";
    cin >> steps;
    int ans = climb_stairs(steps);
    cout << "The number of ways to reach top of staircase is : " << ans << endl;
    return 0;
}