#include <bits/stdc++.h>

using namespace std;

#define ll long
#define ii int
#define FOR(i, s, e) for(ii i = s; i < e; ++i)
#define ROF(i, s, e) for(ii i = s; i > e; --i)

#define MAX4 (ll)1e4
#define MAX6 (ll)1e6
#define MAX9 (ll)1e9

ii main()
{
	ii n;
	cin >> n;
	if (n == 2)
		cout << 1;
	else
		if (n == 3)
			cout << 7;
		else
		{
			if (n % 2)
			{
				cout << 7;
				FOR(i, 0, (n - 3)/2)
					cout << 1;
			}
			else
				FOR(i, 0, n/2)
					cout << 1;

		}
	return 0;
}
