#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;cout<<"Starting & Ending Point:\n";
    cin >> s >> t;
    int a, b; cout<<"Apple & Orange Tree Location:\n";
    cin >> a >> b;
    int m, n; cout<<"Apple & Orange Size of Distance:\n";
    cin >> m >> n;
    int apple[m], orange[n];
    int apl_co = 0, orgn_co = 0;
    cout<<"Apple Distances:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> apple[i];
        apple[i] += a;
        if (apple[i] >= s && apple[i] <= t)
        {
            apl_co++;
        }
    }
    cout<<"Orange Distaces:\n";
    for (int j = 0; j < n; j++)
    {
        cin >> orange[j];
        orange[j] += a;
        if (orange[j] >= s && orange[j] <= t)
        {
            orgn_co++;
        }
    }
    cout <<"Count of Apple & Orange:\n"<<"Apple: "<< apl_co << endl
         <<"Orange: "<< orgn_co;
    return 0;
}
