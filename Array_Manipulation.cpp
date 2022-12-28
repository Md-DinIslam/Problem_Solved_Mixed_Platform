#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
int main()
{
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a] += c;
        arr[b + 1] -= c;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }
    long long max = -1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    } cout<<max<<endl;
    return 0;
}