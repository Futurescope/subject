#include<iostream>
using namespace std;
int main()
{
	//��10Ϊ������Ļ�����Ҫ��a�����С
	int n,i,j,L,t,k = 0,a[20][20] = {0};
	cin >> n;
	L = n - 1;

	k = -1;//������ĸ���ʼֵ��ʼ��k=��ʼֵ-1

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
		a[i][j]=++k;//���n�����������������������0����Ҫ��ֵ


	for(i=0;i<n;i++)//�����������
	{
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");

	}

	return 0;

}
