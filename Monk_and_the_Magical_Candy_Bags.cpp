#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i =0;i<n;i++)
        {
            long long candy;
            cin>>candy;
            bags.insert(candy);
        }
        long long total_c = 0;
        for(int i =0;i<k;i++)
        {
            // multiset<long long> :: iterator max_candy = (--bags.end());
            auto &max_candy = (--bags.end());
            long long temp_candy = *max_candy;
            // total_c += *max_candy;
            total_c += temp_candy;
            bags.erase(max_candy);
            bags.insert(temp_candy/2);
        }
        cout<<total_c<<endl;
    }
    return 0;
}