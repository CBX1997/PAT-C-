#include<cstdio>
int main() {
	int row,col;
	char m;
	scanf_s("%d %d", &col,&m);
	if (col % 2 == 0)
		row = col / 2;
	else
		row = (col + 1) / 2;
	for (int i = 0 ; i < col; i++);


	printf("%c", m);

}