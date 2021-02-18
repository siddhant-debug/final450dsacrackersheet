#include <iostream>
using namespace std;

void merge(int arra[], int arrb[], int m, int n)
{
    //uterate through elements of arrb[] from last element
    for (int i = n - 1; i >= 0; i--)
    {
        /*find the smalest ele greater than arrb[i]
        move all ele one pos ahead till smallest greater element */
        int j, last = arra[m - 1];
        for (j = m - 2; j >= 0; j--)
        {
            while (arra[j] > arrb[i])
            {
                arra[j + 1] = arra[j];
            }
        }
    }
}

int main()
{
    int arra[] = {1, 2, 5, 8, 9, 4};
    int arrb[] = {3, 4, 10, 11};
    int m = sizeof(arra) / sizeof(arra[0]);
    int n = sizeof(arrb) / sizeof(arrb[0]);
    merge(arra, arrb, m, n);
    cout << "After merging first array is :" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arra[i];
    }
    cout << "second array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arrb[i];
    }
}