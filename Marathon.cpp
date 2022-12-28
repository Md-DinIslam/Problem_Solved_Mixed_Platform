#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y,a,b,c;
        cin>>x>>y>>a>>b>>c;
        if(x*y<10) cout<<0<<endl;
        if(x*y>=10 && x*y<21) cout<<a<<endl;
        if(x*y>20 && x*y<41) cout<<b<<endl;
        if(x*y>40) cout<<c<<endl;
    }
    return 0;
}