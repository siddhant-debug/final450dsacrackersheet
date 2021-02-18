#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int overall_best = INT_MIN, current_best = 0,
        start = 0, end = 0, s = 0,i;

    for ( i = 0; i < size; i++)
    {
        current_best += a[i];

        if (overall_best < current_best)
        {
            overall_best = current_best;
            start = s;
            end = i;
        }

        if (current_best < 0)
        {
            current_best = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is " << overall_best << endl;
    cout << "Starting index " << start<< endl
         << "Ending index " << end << endl;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {4,3,-2,6,-14,7,-1,4,5,7,-10,2,9,-10,-5,-9,6,1};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    return 0;
}