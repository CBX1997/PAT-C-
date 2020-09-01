#include<cstdio>
int main() {
	double c2, c1, t;
	int hh, mm ,ss;
	scanf_s("%lf %lf", &c1, &c2);
	t = (c2 - c1) / 100.0;
	hh = t / (3600);
	t = t - hh * (3600);
	mm = t / (60 );
	t = t - mm * (60);
	ss = int(t);
	printf("%d:%d:%d", hh, mm, ss);
	return 0;

}