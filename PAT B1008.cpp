#include<cstdio>
int main() {
	int a[110];
	int n, m, count = 0;
	scanf_s("%d %d", &n, &m);
	m = m % n;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = n - m; i < n; i++) {
		printf("%d", a[i]);
		count++;
		if (count < n) {
			printf(" ");
		}
	}
	for (int i = 0; i < n - m; i++) {
		printf("%d", a[i]);
		count++;
		if (count < n)printf(" ");
	}
	return 0;
}