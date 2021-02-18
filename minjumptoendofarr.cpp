#include <iostream>
#include <math.h>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int minJumps(int arr[], int n)
{
    if (n <= 1) //number of jumps needed to reach the starting index is 0
        return 0;

    if (arr[0] == 0) //return -1 if first element is 0 the no jump
        return -1;

    int maxReach = arr[0]; //stores maximal reachable index in the array
    int step = arr[0];     //number of steps we can take
    int jump = 1;
    //number of jumps necessary to reach that maximal position

    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;

        maxReach = max(maxReach, i + arr[i]);
        step--;

        if (step == 0)
        {
            jump++;

            if (i >= maxReach)
                return -1;

            step = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach end is " << minJumps(arr, n);
    return 0;
}
