#include<cstdio>
const int maxn = 100;
bool hashTable[maxn] = { false };
int main()
	{
	int n, m, x;
	scanf_s("%d %d ", &n, &m);
	for (int j = 0; j < n; j++)
	{
		scanf_s("%d", &x);
		hashTable[x] =true;
	}
	for(int j = 0; j < m; m++)
	{
		scanf_s("%d", &x);
		if (hashTable[x] == true)
		{
			printf("Yes\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	return 0;
	}