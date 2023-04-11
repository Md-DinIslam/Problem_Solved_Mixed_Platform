#include <iostream>
using namespace std;
using ll = long long;
ll getAns(ll a, ll b, ll p){
	ll ans = 1;
	if(a % p == 0) return 0;
	while(b){
		if(b&1){
			ans = (ans * a) % p;
		}
		a = (a * a) % p;
		b >>= 1;
	}
	return ans;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        cout<<getAns(a,b,10)<<"\n";
    }
	return 0;
}