#include<stdio.h>
int main(){
	int stemp = 0;
    int n;
	scanf_s("%d", &n);
	while (n != 1) {
		if (n%2 == 0)
			n = n / 2;
		else
			n = (3 * n + 1) / 2;
		stemp++;

	}
	printf("%d\n", stemp);
	return 0;
}