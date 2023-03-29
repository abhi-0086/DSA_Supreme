#include<bits/stdc++.h>
using namespace std;

int divide_numbers(int dividend, int divisor)
{
    if(divisor == 0)
        cout << "Division by 0 not possible." << endl;
    else
    {
        int ans = 0;
        int start = 0;
        int end = abs(dividend);
        int mid = start + (end - start)/2;
        while(start <= end)
        {
            if(abs(mid*divisor) == abs(dividend))
            {
                return mid;
            }
            if(abs(mid*divisor) < abs(dividend))
            {
                ans = mid;
                start = mid + 1;

            }
            else
            {
                end = mid - 1; 
            }
            mid = start + (end - start)/2;
        }

        if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
            return ans;
        else
            return -1*ans;
    }
}

int main()
{
    int dividend = 12;
    int divisor = 0;
    int result = divide_numbers(dividend, divisor);
    cout << dividend << " / " << divisor << " = " << result << endl;
    return 0;
}