#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int goal, rm, mlg, ber, ebr;
    cin >> t;
    while (t--)
    {
        string name;
        for (int i = 0; i < 4; i++)
        {
            cin >> name >> goal;
            if (name == "Barcelona")
            {
                ber = goal;
            }
            else if (name == "RealMadrid")
            {
                rm = goal;
            }
            else if (name == "Malaga")
            {
                mlg = goal;
            }
            else if (name == "Eibar")
            {
                ebr = goal;
            }
        }

        if (rm < mlg && ber > ebr)
        {
            cout << "Barcelona" << endl;
        }
        else
        {
            cout << "RealMadrid" << endl;
        }
    }
    return 0;
}