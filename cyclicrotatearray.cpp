#include <iostream>
using namespace std;

void rotate(int a[], int m)
{

    int x = a[m - 1]; //storing the last element in x
    for (int i = m - 1; i > 0; i--)

        a[i] = a[i - 1]; //moving every element one position ahead
    a[0] = x;            //putting x in first position
}
int main()
{
    int i;
    int a[] = {1, 2, 3, 4, 5};
    int m = sizeof(a) / sizeof(a[0]);

    rotate(a, m);
    cout << "rotated array is " << endl;

    for (i = 0; i < m; i++)
    {
        cout << a[i];
    }
    return 0;
}