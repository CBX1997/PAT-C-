#include<cstdio>
const int maxn = 210;
int main(){
	int n, x;
    int nn[maxn];
	while (scanf_s("%d",&n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &nn[i]);

		}
		scanf_s("%d", &x);
		int k;
		for ( k = 0; k < n; k++)
		{
			if (nn[k] == x)
			{
				printf("%d", k);
				break;
			}
		}
		if (k == n)
			printf("-1\n");
	}
	return 0;
}