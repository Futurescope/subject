/*
多种统计方法。当数据分布在一个比较小的范围内，可以使用哈希表；当数据分布范围较大，可以使用两行的数组，第一个数组统计有啥，第二个数组统计次数。此种方法时间复杂度为n^2，针对不同的特征的数组
可以使用特殊的方法进行记录，但是一是使用空间换时间，二是针对性强，普适性差。这里我采用第三种方案，普适性好，复杂度为nlogn。
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
		cout << a[i] << "出现的次数是" << count << endl;
		count = 0;
		i = j;
	}
}