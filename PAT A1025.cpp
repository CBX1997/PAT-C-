#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student {
	char id[15];
	int score;
	int location_number;
	int local_rank;
}stu[300];
bool cmp(Student a,Student b)
{
	if (a.score != b.score)
	{
		return a.score > b.score;
	}
	else return strcmp(a.id, b.id) < 0;//��׼��֤��С������

}
int main() {
	int n, k, num = 0;//numΪ�������
	scanf_s("%d", &n,1);//nΪ������
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &k,1);//kΪ����������
		for (int j = 0; j < k; j++)
		{
			scanf_s("%s %d", stu[num].id,15, &stu[num].score,3);
			stu[num].location_number = i;
			num++;
		}
		sort(stu + num - k, stu + num, cmp);//���ÿ����Ŀ�������
		stu[num - k].local_rank = 1;//��һ����Ϊ1
		for (int j = 0; j < num-1; j++)
			{
			if (stu[num - k + j].score != stu[num - k + j + 1].score)
				stu[num - k + j + 1].local_rank = j + 2;
			else
				stu[num - k + j + 1].local_rank = stu[num - k + j].local_rank;
			}
	}
printf("%d\n",num);//�����Ա����
sort(stu,stu+num,cmp);//�����п�������
int r=1;
printf("%s ", stu[0].id);
printf("%d %d %d\n", r, stu[0].location_number, stu[0].local_rank);
for (int i = 0; i <num-1; i++)
	{
	if (stu[i].score != stu[i + 1].score)
		{
		r = i + 2;
		}
	printf("%s ", stu[i+1].id);
	printf("%d %d %d\n", r, stu[i+1].location_number, stu[i+1].local_rank);
	}
return 0;
}