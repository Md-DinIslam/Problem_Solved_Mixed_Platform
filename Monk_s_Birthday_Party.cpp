#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    set<string> name;
    for(int i = 0;i<n;i++)
    {
      string str;
      cin>>str;
      name.insert(str);
    }
    for(auto &i: name)
    {
      cout<<i<<endl;
    }
  }
  return 0;
}