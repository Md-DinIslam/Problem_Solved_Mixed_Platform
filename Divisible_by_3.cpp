#include <bits/stdc++.h>
using namespace std;
int Div(int a, int b)
{
  if (a % 3 == 0 || b % 3 == 0){
    return 0;
  }
    else if(a % 3 == b % 3){
        return 1;
    }
    else{
        return 2;
    }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b;
    cin >> a >> b;
    cout << Div(a, b) << endl;
  }
  return 0;
}