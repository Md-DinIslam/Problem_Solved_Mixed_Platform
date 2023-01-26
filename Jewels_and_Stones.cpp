#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string j;
        cin>>j;
        string s;
        cin>>s;
        int cnt =0;
        for(int i = 0;i<s.size();i++)
        {
            for(int k =0;k<j.size();k++)
            {
                if(s[i] == j[k])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}