//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

#define ll long
#define ii int
#define FOR(i, s, e) for(ii i = s; i < e; ++i)
#define ROF(i, s, e) for(ii i = s; i > e; --i)

#define MAX4 (ll)1e4
#define MAX5 (ll)1e5
#define MAX6 (ll)1e6
#define MAX9 (ll)1e9

ii n,l,r;
ii a[MAX5], b[MAX5];
ii testa[MAX5 + 1] = {0, };
ii testb[MAX5 + 1] = {0, };

ii main()
{
	//cin >> n >> l >> r;
	ii i;
	for (i = 0; i < MAX5 + 1; i++)
	{
		testa[i] = 0;
		testb[i] = 0;
	}
	scanf("%d %d %d", &n, &l, &r);
	l--;
	r;
	for (i = 0; i < n; ++i)
		scanf("%d", a + i);
	for (i = 0; i < n; ++i)
		scanf("%d", b + i);
	for (i = l; i < r; ++i)
	{
		testa[a[i]]++;
		testb[b[i]]++;
	}
	for (i = 1; i < MAX5 + 1; i++)
	{
		if (testa[i] != testb[i])
		{
			printf("LIE");
			return 0;
		}
	}
	printf("TRUTH");
	return 0;
}
