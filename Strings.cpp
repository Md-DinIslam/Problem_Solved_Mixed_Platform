#include <bits/stdc++.h>
using namespace std;
#define ASCII_Size 256
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string a,b;
  cin>>a>>b;
  int a_len = a.length(),b_len = b.length();
  cout<<a_len<<" "<<b_len<<endl;
  string s = a+b;
  cout<<s<<endl;
  char temp_ch = a[0];
  a[0] = b[0];
  b[0] = temp_ch;
  cout<<a<<" "<<b<<endl;
  return 0;
}