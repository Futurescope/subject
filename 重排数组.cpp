#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void resort(vector <int > &array)
{
	int i = 0;
	int j = array.size() - 1;
	if (j == 0)
		return ;
	while (i < j)
	{
		while (array[i] < 0)
			++i;
		while (array[j] > 0)
			--j;
		if (i >= j)
			break;
		swap(array[i], array[j]);
	}
	
}
