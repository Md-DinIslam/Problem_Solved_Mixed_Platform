#include <bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(int n)
{
	int candles[n];
	int count = 0, maximum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> candles[i];
		if(maximum<candles[i])
		{
			maximum=candles[i];
			count=1;
		}
		else if(maximum == candles[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	cout<<birthdayCakeCandles(n);
	return 0;
}