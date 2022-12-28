#include <bits/stdc++.h>
using namespace std;
int main()
{   // 97-122 = a to z & 65-90= A to Z
    string s;
    cin>>s;
    int size = s.length();
    for(int i=0;i<size;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
    return 0;
}