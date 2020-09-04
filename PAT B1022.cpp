#include<cstdio>
int main(){
	int a,b,d,temp;
    int ans[31];
	scanf_s("%d %d %d", &a, &b, &d);
	temp = a + b;
	int i = 0;
	do {
		ans[i++] = temp % d;
		temp = temp / d;

	} while (temp !=0);
		for ( i=i-1 ; i >= 0; i--) {
			printf("%d", ans[i]);
		}
	return 0;
}