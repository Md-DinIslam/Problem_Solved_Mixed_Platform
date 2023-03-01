#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
long long posi[N];
long long n,cows;
bool WoodSufficient(int minDist){
    long long cnt = cows;
    int lastposi = -1;
    for(int i = 0;i < n;i++){
        if(posi[i] - lastposi >= minDist || lastposi == -1){
            lastposi = posi[i];
            cnt--;
        }
        if(cnt == 0) break;
    }
    return cnt == 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        // long long n;
        cin>>n>>cows;
        for(int i = 0; i<n;i++){
            cin>>posi[i];
        }
        sort(posi,posi+n);
        int lo = 0,hi = 1e9,mid;
        while(hi - lo > 1){
            mid = (hi + lo)/2;
            if(WoodSufficient(mid)){
                lo = mid;
            }
            else{
                hi = mid - 1;
            }
        }
        if(WoodSufficient(hi)){
            cout<<hi<<endl;
        }
        else{
            cout<<lo<<endl;
        }
    }
    return 0;
}