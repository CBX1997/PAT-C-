#include<cstdio>
#include<cstring>
int main() {
	char str[90];
	 gets_s(str);
	 int len = strlen(str), r = 0, h = 0;
	 char ans[90][90];
	 for (int i = 0; i < len; i++)
	 {
		 if (str[i] != ' ')
		 {
			 ans[r][h++] = str[i];
		 }
		 else
		 {
			 ans[r][h] = '\0';
			 r++;
			 h = 0;
		 }
		 for (int i =r; i >= 0; i--)
		 {
			 printf("%s", ans[i]);//输出了完整的单词
			 if (i > 0)
			 {
				 printf(" ");
			 }
		 }
	 }
return 0;
}