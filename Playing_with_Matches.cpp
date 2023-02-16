#include <bits/stdc++.h>
using namespace std;
/* 0,6,9 == 6 | 3,5,2 == 5  */
unordered_map<int,int> mp = {{0,6},{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6}};
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
    int a, b;
    cin >> a >> b;
    int sum = a+b,result = 0;
    while(sum != 0)
    {
      int rem = sum % 10;
      result += mp[rem];
      sum /= 10;
    }
    cout<<result<<endl;
  }
  return 0;
}