#include <bits/stdc++.h>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	long long l, r, k;
	cin >> l >> r >> k;
	long long pw = 1;
	bool f = false;
	while (pw <= r / k)
	{
		if (pw >= l && pw <= r)
		{
			cout << pw << ' '; f = 1;
		}
		pw *= k;
	}
	if (pw >= l && pw <= r)
	{
		cout << pw << ' '; f = 1;
	}
	if (!f)

	{
		cout << -1 << endl;
	}
	return 0;
}
