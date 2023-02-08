#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long product = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      product *= x;
    }
    int temp = product % 10;
    if (temp == 2 || temp == 3 || temp == 5)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}