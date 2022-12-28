#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count=0;
    for(int j=0;j<n-1;j++)
    {
        for(int m=j+1;m<n;m++)
        {
            if((a[j]+a[m]) % k == 0)
            {
                count++;
            }
        }
    } cout<<count<<endl;
    return 0;
}