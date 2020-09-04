#include<cstdio>
int change(char c) {//B=0，C=1，J=0
	if (c == 'B') return 0;
	if (c == 'C') return 1;
	if (c == 'J') return 2;
}
int main(){
	char mp[3] = { 'B', 'C', 'J' };
	int n;
	scanf_s("%d", &n);
	int times_A[3] = { 0 }, times_B[3] = { 0 };
	//记录甲乙的 胜 负 平
	int hand_A[3] = { 0 }, hand_B[3] = { 0 };//按照BCJ的顺序记录3种手势胜负的次数
	char c1 , c2 ;
	int k1, k2;
	for (int i = 0; i < n; i++)
	{
		getchar();
		scanf_s("%c %c ", &c1,1, &c2,1);
		k1 = change(c1);//转换为数字
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2) 
		{//如果甲赢
			times_A[0]++;
			times_B[2]++;
			hand_A[k1]++;
		}else if(k1==k2){//平
			times_A[1]++;
		    times_B[1]++;			
		}
		else {//乙赢
			times_A[2]++;
			times_B[0]++;
			hand_B[k2]++;
		}
	}
	printf("%d %d %d\n", times_A[0], times_A[1], times_A[2]);
	printf("%d %d %d\n", times_B[0], times_B[1], times_B[2]);
	int id1 = 0, id2 = 0;
	for (int i = 0; i < 3; i++)
	{
		//甲乙获胜最多的手势
		if (hand_A[i] > hand_A[id1])id1 = i;
		if (hand_B[i] > hand_B[id2])id2 = i;
	}
	printf("%c %c\n", mp[id1], mp[id2]);
	return 0;
}