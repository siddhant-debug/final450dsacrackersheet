#include <iostream>
#include <algorithm>
using namespace std;
int getMinDiff(int a[], int n, int k)
{
    sort(a, a + n);
    int i, mx, mn, ans;
    ans = a[n - 1] - a[0]; // this can be one possible solution

    for (i = 0; i < n; i++)
    {
        if (a[i] >= k) // since height of tower can't be -ve so taking only +ve heights
        {
            mn = min(a[0] + k, a[i] - k);
            mx = max(a[n - 1] - k, a[i - 1] + k);
            ans = min(ans, mx - mn);
        }
    }
    return ans;
}

int main()
{
    int a[] = {4, 5, 6, 7, 8, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;
    cout << "Maximum diff is " << getMinDiff(a, n, k);
    return 0;
}