#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int speed = 0;
    for (int i = 0; i < N; i++)
    {
        x1 += v1;
        x2 += v2;
        if (x1 == x2)
        {
            speed = 1;
            break;
        }
    }
    if (speed == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}