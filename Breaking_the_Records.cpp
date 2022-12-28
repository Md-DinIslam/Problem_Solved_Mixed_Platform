#include <bits/stdc++.h>
using namespace std;
const int N = 1e8;
int scrore[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> scrore[i];
    }
    int max = scrore[0], min = scrore[0];
    int max_count = 0, min_count = 0;
    for (int i = 1; i < n; i++)
    {
        if(min > scrore[i])
        {
            min = scrore[i]; min_count++;
        }
        if(max < scrore[i])
        {
            max = scrore[i];max_count++;
        }
    }
    cout<<max_count<<" "<<min_count<<endl;
    return 0;
}