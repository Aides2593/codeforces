#include <stdio.h>
#include <math.h>
#define MAXN 100001
int n, k;
int c[MAXN], p[MAXN];
bool IsPrime(int num)
{
	if (num == 2 || num == 3 || num == 5 || num == 7)
		return true;
	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
		return false;
	int limit = (int)sqrt((double)num);
	bool flag = true;
	for (int i = 2; i <= limit; i++)
	{
		if (num % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	scanf("%d", &n);
	int tc = 1;
	int counter = 0;
	int s = 2, index = -1;
	while (counter < n)
	{
		if (index == -1 || IsPrime(s))
		{
			c[s] = 1;
			index ++;
			p[index] = s;
			s++;
			counter ++;
			continue;
		}
		for (int i = index; i >= 0; i--)
		{
			if (s % p[i] == 0)
			{
				tc = c[p[i]] + 1;
				c[s] = tc;
				s++;
				counter ++;
				break;
			}
		}
	}
	printf("%d\n", tc);
	counter = 0;
	s = 2;
	while (counter <n)
	{
		printf("%d ",c[s]);
		s ++;
		counter ++;
	}
	return 0;
}
