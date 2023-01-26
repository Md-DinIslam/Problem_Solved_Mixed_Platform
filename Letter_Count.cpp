#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    cin>>str;
    int max_cnt = 0, alp_cnt[256] = {0};
    char ch;
    int length = strlen(str);
    for(int i = 0;i<length;i++)
    {
        alp_cnt[str[i]]++;
        if(max_cnt < alp_cnt[str[i]])
        {
            max_cnt = alp_cnt[str[i]];
            ch = str[i];
        }
    }
    cout<<ch<<endl;
    return 0;
}