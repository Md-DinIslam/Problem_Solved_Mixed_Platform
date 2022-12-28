#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int green_bal, purple_bal;
        cin >> green_bal >> purple_bal;
        int n;
        cin >> n;
        int sum_g = 0,sum_p=0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            sum_g += (green_bal * a) + (purple_bal * b);
            sum_p += (purple_bal * a) + (green_bal * b);
        }
        if(sum_g > sum_p)
        {
            cout<<sum_p<<endl;
        }
        else
        {
            cout<<sum_g<<endl;
        }
    }
    return 0;
}
