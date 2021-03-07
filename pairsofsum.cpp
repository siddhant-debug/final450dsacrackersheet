#include <bits/stdc++.h>
using namespace std;
int getpairscount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int twice_count = 0;
    for (int i = 0; i < n; i++)
    {
        twice_count += m[k - arr[i]];
        if (k - arr[i] == arr[i])
            twice_count--;
    }
    return twice_count / 2;
}

int main()
{
    int arr[] = {1, 5, 6, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;
    cout << "Count Of pairs is " << getpairscount(arr, n, k);
    return 0;
}