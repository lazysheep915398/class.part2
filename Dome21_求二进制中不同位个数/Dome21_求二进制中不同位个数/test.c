#include<stdio.h>
#include<stdlib.h>

int count_bit_one2(int n)
{
	int count = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)//n�����ƶ�iλȻ�� ���� 1 ���������λ
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
	printf("��������������");
	scanf_s("%d%d", &n, &m);
	//дһ������ �ж϶����������ж��ٸ���ͬ
	//get_diff_bit(m, n);

	int count = get_diff_bit(m, n);
	printf("count=%d\n", count);
	system("pause");
	return 0;

}