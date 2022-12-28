#include <bits/stdc++.h>
using namespace std;
int digit_sum_div(int num)
{
    int new_num = num, sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    if (sum % 4 == 0)
    {
        return new_num;
    }
    else
    {
        new_num++;
        return digit_sum_div(new_num);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << digit_sum_div(n) << endl;
    }
    return 0;
}