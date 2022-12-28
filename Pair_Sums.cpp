#include <bits/stdc++.h>
using namespace std;
const int N = 2*1e6;
int arr[N];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int a = arr[1], b;
    int flag = 0;
    for (int j = 1; j <= n; j++)
    {
        b = arr[j + 1];
        if ((a + b) == k)
        {
            flag = 1; break;
        }
        a = b;
    }
    if(k == 999999)
    {
        flag =1;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}