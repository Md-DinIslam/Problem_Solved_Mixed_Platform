#include <bits/stdc++.h> // I solved it without any help...
using namespace std;
const int N = 1e6;
int arr[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >>n>> m;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        int schl_count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[j] <= n)
            {
                n -= arr[j];
                schl_count++;
            }
        }
        cout << schl_count << endl;
    }
    return 0;
}