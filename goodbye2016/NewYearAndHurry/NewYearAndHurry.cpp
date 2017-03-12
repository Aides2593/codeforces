#include <stdio.h>

#define input freopen("input.txt", "r", stdin)
int main()
{
	int n, k, r, ans;
	//input;
	scanf("%d %d", &n, &k);
	r = 240 - k;
	int i = 1;
	ans = 0;
	while (1)
	{
		if (r < 5 * i)
			break;
		r -= 5*i;
		ans++;
		i++;
		if (i > n)
			break;
	}
	printf("%d", ans);
	return 0;
}
