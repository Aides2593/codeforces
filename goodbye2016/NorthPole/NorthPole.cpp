#include <stdio.h>

#define MAXN 50
typedef struct coorTag
{
	int 	dis;
	char	dir[6];
} COOR;

int 	n;
COOR 	r[MAXN];
int main()
{

	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &r[i].dis);
		scanf("%s", &r[i].dir);
	}
	

	/*for (int i = 0; i < n; i++)
	{
		printf("%d %s", r[i].dis, r[i].dir);
	}*/
	return 0;
}
