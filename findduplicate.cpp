#include<bits/stdc++.h>
using namespace std;

void printdupli(int arr[], int n)
{
    int i;
    cout << "The repeating elements are :" << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3, 1, 6, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printdupli(arr, n);
    return 0;
}