#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    bool a[n];
    a[0] = false;
    for (int i = 0; i <= n; i++)
    {
        a[i] = true;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (a[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                a[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (a[i] == true)
            cout << i << " ";
    }
    return 0;
}