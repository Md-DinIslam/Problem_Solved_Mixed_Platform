#include <bits/stdc++.h>
using namespace std;
const long long Modulo = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n];
    long long product = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        product = (product * a[i]) % Modulo;
    }
    cout << product <<endl;
    return 0;
}