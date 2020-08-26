#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	int number[10];
	for (int i = 0; i <10; i++)
	{
		scanf_s("%d", &number[i]);
	}
	for (int i = 1; i < 10;i++)
	{
		if(number[i] > 0)
		{
			printf("%d", i);
			number[i]--;
			break;
		}
		
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < number[i]; j++)
			printf("%d", i);
	}
	return 0;
}