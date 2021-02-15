#include <iostream>
using namespace std;

int printunion(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
            cout << a1[i++] << "";
        else if (a2[j] < a1[i])
            cout << a2[j++] << "";
        else
        {
            cout << a2[j++] << "";
            i++;
        }
    }

    while (i < m)
        cout << a1[i++] << "";
    while (j < n)
        cout << a2[j++] << endl;
}
int printintersec(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
            i++;
        else if (a2[j] < a1[i])
            j++;
        else
        {
            cout << a1[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {2, 3, 5, 7};
    int m = sizeof(a1) / sizeof(a1[0]);
    int n = sizeof(a2) / sizeof(a2[0]);
    printunion(a1, a2, m, n);
    printintersec(a1, a2, m, n);
    return 0;
}
