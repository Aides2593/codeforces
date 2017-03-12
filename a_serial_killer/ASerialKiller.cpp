#include <stdio.h>
#include <string.h>
#define input freopen("input.txt", "r", stdin)
int n;
char fk[11], sk[11];
int main()
{
	char tk[11];
	//input;
	scanf("%s %s", fk, sk);
	scanf("%d", &n);
	printf("%s %s\n", fk, sk);
	for (int i = 0; i <n ;i++)
	{
		scanf("%s", tk);
		if (!strcmp(tk, fk))
			scanf("%s", fk);
		else
			scanf("%s", sk);
		printf("%s %s\n", fk, sk);
	}
	return 0;
}
