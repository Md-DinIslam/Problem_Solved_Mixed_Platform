#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> msi;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> nums;
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int rem = s[i] - '0';
        result = ((result * 10) + rem);
        // result = ((result * 10) + rem) % n;
        // cout<<rem<<endl;
        if (result % n == 0)
        {
            nums.push_back(1);
        }
        else
        {
            nums.push_back(0);
            result %= n;
        }
    }
    // if (s[0] - '0' < n)
    // {
    //     s[0] = '0';
    // }
    // for (int i = 0; i < s.size(); i++)
    // {
    //     nums.push_back(s[i] - '0');
    // }
    // cout << s << endl;
    for (auto &i : nums)
    {
        cout << i;
    }
    return 0;
}