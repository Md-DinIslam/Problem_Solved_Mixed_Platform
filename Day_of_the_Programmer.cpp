#include <bits/stdc++.h>
using namespace std;
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  int year;
  cin >> year;
  if (year < 1918)
  {
    if (year % 4 == 0)
    {
      cout << "12.09." << year << endl;
    }
    else
    {
      cout << "13.09." << year << endl;
    }
  }
  else if (year == 1918)
  {
    cout << "26.09." << year << endl;
  }
  else
  {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
      cout << "12.09." << year << endl;
    }
    else
    {
      cout << "13.09." << year << endl;
    }
  }

    return 0;
}