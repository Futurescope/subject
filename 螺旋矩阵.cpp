#include<iostream>
using namespace std;
int main()
{
	//以10为例。大的话可能要改a数组大小
	int n,i,j,L,t,k = 0,a[20][20] = {0};
	cin >> n;
	L = n - 1;

	k = -1;//矩阵从哪个初始值开始？k=初始值-1

	for(i = j = 0;i<n/2;L-=2)
	{
		for(t = 0;t<L;t++)
			a[i++][j] = ++k;
		for(t = 0;t<L;t++)
			a[i][j++] = ++k;
		for(t = 0;t<L;t++)
			a[i--][j] = ++k;
		for(t = 0;t<L;t++)
			a[i][j--] = ++k;
		i++;j++;
	}

	if(n%2)
		a[i][j]=++k;//如果n是奇数，则数组中央的数是0，需要赋值


	for(i=0;i<n;i++)//数组输出部分
	{
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");

	}

	return 0;

}
