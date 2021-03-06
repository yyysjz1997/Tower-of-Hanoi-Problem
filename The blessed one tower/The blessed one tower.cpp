// The blessed one tower.cpp: 定义控制台应用程序的入口点。
//

#include <cstdio>
using namespace std;
//递归
void tower(int n, char source, char end, char idle)
{
	if (n == 1)
	{
		printf("%c->%c\n", source, end);
		return;
	}
	tower(n - 1, source, idle, end);
	printf("%c->%c\n", source, end);
	tower(n - 1, idle, end, source);
	return;
}
int main(void)
{
	tower(3, 'a', 'b', 'c');
	return 0;
}