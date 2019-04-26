#include<iostream>
#include<math.h>
using namespace std;
void fun(int a[],int n)
{
	int i,j,p;
	for(i=0;i<n;++i){
		if(a[i]==0){
			for(j=i+1;j<n;++j){
				if(a[j]!=0){
					p=j;
					break;
				}
				if(j==n-1)
				return;

			}
			a[i]=a[p];
			a[p]=0;
		}
	}
}
int main()
{
	int a[6]={7,3,0,0,0,5};
	fun(a,6);
	int i=0;
	while(i<6)
		cout<<a[i++]<<endl;
	return 0;
}
