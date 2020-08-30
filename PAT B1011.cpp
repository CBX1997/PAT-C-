#include<cstdio>
int N;
int main() {
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++) {
		long long a, b, c;
		scanf_s("%d %d %d", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: ture\n",i);
		}
		else {
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
}