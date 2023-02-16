#include <bits/stdc++.h>
using namespace std;
#define ASCII_Size 256
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    long long x;
    cin >> n >> x;
    long long ar[n];
    int max = 0;
    // for (int i = 0; i < n; i++)
    for (int i = 1; i <= n; i++)
    {
      cin >> ar[i];
      if(x > ar[i])
      {
        // max = i+1;
        max = i;
      }
    }
    cout<<max<<endl;
  }
  return 0;
}