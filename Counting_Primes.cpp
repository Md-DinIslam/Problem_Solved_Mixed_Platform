#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Din cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// TypeDEf
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef vector<vll> mat;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<int, int> umpi;
typedef map<ll, ll> mpll;

// Macros
#define prf(x) printf("%d\n", x)
#define pfl(x) printf("%lld\n", x)
#define sc(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define scf(x) scanf("%lf", &x)
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i,a, n) for (int i = a; i <= n; i++)
#define rfl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pf cout << "FIRST\n";
#define nn printf("\n");
#define bitcount __builtin_popcountll
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.end(), v.begin()

//DEBUG
void __print(int x) {cerr << x << " ";}
void __print(long x) {cerr << x << " ";}
void __print(long long x) {cerr << x << " ";}
void __print(unsigned x) {cerr << x << " ";}
void __print(unsigned long x) {cerr << x << " ";}
void __print(unsigned long long x) {cerr << x << " ";}
void __print(float x) {cerr << x << " ";}
void __print(double x) {cerr << x << " ";}
void __print(long double x) {cerr << x << " ";}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Constants
const lld PI = 3.141592653589793238;
const ll INF = 1e18 + 9;
const ll mod = 1e9 + 7;
const int mxN = 1e4 + 10, mxM = 2 * 10e6 + 10;
int v[mxN], sg[4 * mxN], lz[4 * mxN];
// vector<int> v(mxN), sg(4 * mxN), lz(4 * mxN);
// vector<bool> isPrime(mxM, 1);
bool isPrime[mxM];
void primeGen() {
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < mxM; ++i) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < mxM; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
void lazy(int s, int e, int i) {
    ;
}
void build(int s, int e, int i = 1) {
    if (s == e) {
        sg[i] = isPrime[v[s]];
    }
    else {
        int mid = (s + e) >> 1;
        build(s, mid, 2 * i);
        build(mid + 1, e, 2 * i + 1);
        sg[i] = sg[2 * i] + sg[2 * i + 1];
    }
}
void update(int s, int e, int lb, int rb, int val, int i = 1) {
    if (lz[i]) {
        sg[i] = isPrime[lz[i]] * (e - s + 1);
        if (s != e)
            lz[2 * i] = lz[2 * i + 1] = lz[i];
        lz[i] = 0;
    }
    if (s > rb || e < lb) return;
    if (s >= lb && e <= rb) {
        lz[i] = val;
        sg[i] = isPrime[lz[i]] * (e - s + 1);
        if (s != e)
            lz[2 * i] = val, lz[2 * i + 1] = lz[i];
        lz[i] = 0;
    }
    else {
        int mid = (s + e) >> 1;
        update(s, mid, lb, rb, val, 2 * i);
        update(mid + 1, e, lb, rb, val, 2 * i + 1);
        sg[i] = sg[2 * i] + sg[2 * i + 1];
    }
}
int query(int s, int e, int lb, int rb, int i = 1) {
    if (lz[i]) {
        sg[i] = isPrime[lz[i]] * (e - s + 1);
        if (s != e)
            lz[i * 2] = lz[i * 2 + 1] = lz[i];
        lz[i] = 0;
    }
    if (s > rb || e < lb) return 0;
    if (s >= lb && e <= rb) return sg[i];
    int mid = (s + e) >> 1;
    int a = query(s, mid, lb, rb, i * 2);
    int b = query(mid + 1, e, lb, rb, i * 2 + 1);
    return a + b;
}
void solve()
{
    memset(sg, 0, sizeof(sg));
    memset(lz, 0, sizeof(lz));
    memset(v, 0, sizeof(v));
    int n, q;
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &v[i]);
    }
    build(1, n);
    while (q--) {
        int tp;
        scanf("%d", &tp);
        if (tp == 0) {
            int lb, rb, val;
            scanf("%d %d %d", &lb, &rb, &val);
            update(1, n, lb, rb, val);
        }
        else {
            int lb, rb;
            scanf("%d %d", &lb, &rb);
            printf("%d\n", query(1, n, lb, rb));
        }
    }
}
// Main
int main()
{
    Code By Din
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    int t = 1;
    scanf("%d", &t);
    // while (t--) solve();
    primeGen();
    fl(i, t) { //Kickstart
        printf("Case %d:\n", i + 1);
        solve();
    }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}