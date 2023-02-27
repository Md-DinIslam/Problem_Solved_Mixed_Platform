#include <bits/stdc++.h>
using namespace std;
#define vt vector<int>
#define ll lon long
#define map map<int, int>
#define pr pair<int, int>
#define vtp vector<pair<int, int>>
vector<string> vs;
void Generate(string &s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        vs.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        Generate(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            Generate(s, open, close - 1);
            s.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    Generate(s, n, n);
    for (auto &val : vs)
        cout << val << endl;
    return 0;
}