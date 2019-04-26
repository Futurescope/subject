#include<iostream>
#include<vector>
#include<algorithm>
#define M 5
#define N 6
using namespace::std;
void arraysort(vector<vector<int>>& array)
{
	vector<int> temp;
	int i, j;
	for (i = 0; i < M; ++i) 
	{
		for (j = 0; j < N; ++j)
		{
			temp.push_back(array[i][j]);
		}
	}
	sort(temp.begin(), temp.end());
	int k = 0;
	for (i = 0; i < M; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			array[i][j]=temp[k];
			++k;
		}
	}

}
void output(vector<vector<int>> array)
{
	int i = 0, j = 0;
	for (i = 0; i < M; ++i) 
	{
		for (j = 0; j < N; ++j)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	vector<vector<int>> array;
	vector<int> temp(N);
	int i = 0, j = 0;
	for (i = 0; i < M; ++i) 
	{
		//array[i].resize(N);
		temp.clear();
		for (j=0; j < N; ++j)
		{
			//temp.resize(N);
			temp.push_back(rand() % 100);
			//cout << temp[j] << " ";
		}
		
		array.push_back(temp);
		//cout << array[i].size();
		
	}
	output(array);
	cout << endl;
	arraysort(array);
	output(array);
	return 0;
}