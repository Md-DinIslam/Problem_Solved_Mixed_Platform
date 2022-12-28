#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        if( x >100)
        {
            x -= 10;
            cout<<x<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}