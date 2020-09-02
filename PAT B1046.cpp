#include<cstdio>
int main() {
	int n, a, b, na, nb;
	int ta = 0;
	int tb = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d %d %d", &a, &na,&b,&nb);
		if ((a + b) == na && ( a + b ) != nb) {
			ta++;
		}
		else if ((a + b) == nb && ( a + b ) != na) {
			tb++;
		}
	}
	printf("%d %d", tb, ta);
	return 0;
}