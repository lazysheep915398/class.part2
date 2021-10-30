#include<stdio.h>
#include<stdlib.h>

int count_bit_one2(int n)
{
	int count = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)//n向右移动i位然后 按语 1 计算二进制位
		{
			count++;
		}
	}
	return count;
}

int get_diff_bit(int n, int m)
{
	int temp = n^m;
	return count_bit_one2(temp);
}
int main()
{
	int n, m;
	printf("请输入两个数：");
	scanf_s("%d%d", &n, &m);
	//写一个函数 判断二进制数中有多少个不同
	//get_diff_bit(m, n);

	int count = get_diff_bit(m, n);
	printf("count=%d\n", count);
	system("pause");
	return 0;

}