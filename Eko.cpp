#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
long long trees[N];
long long m;
bool WoodSufficient(int h,int n){
    long long woods = 0;
    for(int i = 0;i < n;i++){
        if(trees[i] > h){
            woods += (trees[i] - h);
        }
    }
    return woods >= m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n>>m;
    for(int i = 0; i<n;i++){
        cin>>trees[i];
    }
    int lo = 0,hi = 1e9,mid;
    while(hi - lo > 1){
        mid = (hi + lo)/2;
        if(WoodSufficient(mid,n)){
            lo = mid;
        }
        else{
            hi = mid - 1;
        }
    }
    if(WoodSufficient(hi,n)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
    return 0;
}