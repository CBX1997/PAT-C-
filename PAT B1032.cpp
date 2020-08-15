#include<cstdio>
int main() {
	const int maxn = 100000;
	int school[maxn] = { 0 };
	int n, id, score;

	scanf_s("%d", &n);
	for (int i = 0;i < n; i++)
	{
		scanf_s("%d%d",&id,&score);
		school[id] += score;
	}
	int max = -1, k = 0;
		for (int i = 1; i <= n; i++)
		{
			if (school[i] > max)
			{
				max = school[i];
				k = i;
			}
		}
		printf("%d %d", k, max);
}