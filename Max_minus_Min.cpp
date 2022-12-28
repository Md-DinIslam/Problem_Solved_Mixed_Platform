#include <bits/stdc++.h>
using namespace std;
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max, min;
        if (a > b && a > c)
        {
            max = a;
            if(b < c)
            {
                min = b;
            }
            else
            {
                min = c;
            }
        }
        else if( b > c)
        {
            max = b;
            min = c;
        }
        else{
            max = c;
            min = a;
        }
        cout<< max - min<<endl;
    }
    return 0;
}