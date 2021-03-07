#include <iostream>
using namespace std;
void stockbuysell(int price[], int n)
{
    if (n == 1)
        return;
    int i = 0;
    while (i < n - 1)
    {
        while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;
        if (i == n - 1)
            break;
        int buy = i++;

        while ((i < n - 1) && (price[i] > price[i - 1]))
            i++;
        int sell = i - 1;
        cout << "buy on : " << buy << endl;
        cout << "sell on  : " << sell << endl;
    }
}

int main()
{
    int n, price[10];
    cout << "enter how many prices " << endl;
    cin >> n;
    cout << "enter prices " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    stockbuysell(price, n);
    return 0;
}
