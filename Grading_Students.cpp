#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cout<<"Size: ";
    cin >> n;
    int grade[n];
    for (int i = 0; i < n; i++)
    {
        cin >> grade[i];
    }
    cout<<"Appropriate Grad:\n";
    for (int j = 0; j < n; ++j)
    {
        if (grade[j] < 38)
        {
            cout << grade[j] << endl;
        }
        int rem = grade[j] % 5;
        if (grade[j] > 37 && grade[j] < 100)
        {
            if ((5 - rem) < 3)
            {
                grade[j] += (5 - rem);
            }
            cout << grade[j] << endl;
        }
    }
}