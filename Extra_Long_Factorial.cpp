#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int factorial[N];
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int n;
    cin >> n;
    factorial[0] = factorial[1] = 1;
    int index = 1, carray = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < index; j++)
        {
            int value = factorial[j] * i + carray;
            factorial[j] = value % 10;
            carray = value / 10;
        }
        while (carray != 0)
        {
            factorial[index] = carray % 10;
            carray /= 10;
            index++;
        }
    }
    int ZeroCount = 0;
    for (int i = index - 1; i >= 0; i--)
    {
        cout << factorial[i];
        if(factorial[i] == 0)
        ZeroCount++;
    }
    cout<<endl<<ZeroCount;
    return 0;
}