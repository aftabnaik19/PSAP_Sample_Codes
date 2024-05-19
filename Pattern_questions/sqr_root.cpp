#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 150;
    float high = n, low = 0, mid;
    while ((high - low) > (float)0.0001)
    {
        mid = (float)(high + low) / 2;
        if ((mid * mid) > n)
        {
            high = mid;
        }
        else if (mid * mid < n)
        {
            low = mid;
        }
        else
        {
            cout << mid << endl;
            return 0;
        }
    }
}