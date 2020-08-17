#include<cstdio>
int main() {
	int row,col,n;
	char m;
	scanf_s("%d %c", &col,&m);
	if (col % 2 == 0)
		row = col / 2;
	else
		row = (col + 1) / 2;

	for (int i = 0; i < col; i++) {
		printf("%c", m);
	}
	for (int i = 0; i <row; i++)
		{
			printf("\n");
			printf("%c", m);
			for (int n = 0; n <(col - 2); n++) 
			{
				printf(" ");
			}
			printf("%c", m);
		}
	printf("\n");
	for (int i = 0; i < col; i++)
		printf("%c", m);
	return 0;
}