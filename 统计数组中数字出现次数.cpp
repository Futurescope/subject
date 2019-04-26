/*
����ͳ�Ʒ����������ݷֲ���һ���Ƚ�С�ķ�Χ�ڣ�����ʹ�ù�ϣ�������ݷֲ���Χ�ϴ󣬿���ʹ�����е����飬��һ������ͳ����ɶ���ڶ�������ͳ�ƴ��������ַ���ʱ�临�Ӷ�Ϊn^2����Բ�ͬ������������
����ʹ������ķ������м�¼������һ��ʹ�ÿռ任ʱ�䣬���������ǿ�������Բ�����Ҳ��õ����ַ����������Ժã����Ӷ�Ϊnlogn��
*/
#include<iostream>
using namespace std;
void quicksort(int a[], int low = 0, int high = 199)
{
	int temp;
	int i = low, j = high;
	if (low < high)
	{
		temp = a[low];
		while (i < j)
		{
			while (j > i&&a[j] >= temp)
				--j;
			if (i < j)
			{
				a[i] = a[j];
				++i;
			}
			while (i < j&&a[i] <= temp)
				++i;
			if (i < j)
			{
				a[j] = a[i];
				--j;
			}
		}
		a[i] = temp;
		quicksort(a, low, i - 1);
		quicksort(a, i + 1, high);
	}
}

void times(int a[])
{
	
	quicksort(a, 0, 199);
	
	int i = 0, j = 0;
	
	int count = 0;
	for (i = 0; i < 200; ++i)
	{
		for (j = i + 1; j < 200; ++j)
		{
			if (a[i] == a[j])
				++count;
			else
				break;
			
		}
		cout << a[i] << "���ֵĴ�����" << count << endl;
		count = 0;
		i = j;
	}
}