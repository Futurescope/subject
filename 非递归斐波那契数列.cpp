#include<iostream>
using namespace std;
int fibo(int a)
{
	if (a == 1)
		return 1;
	if (a == 2)
		return 1;
	int num1=1, num2=1, add;
	for (; a > 2; --a) {
		add = num1 + num2;
		num1 = num2;
		num2 = add;

	}
	return add;

}
int main()
{
	int num;
	cin >> num;
	cout << fibo(num) << endl;
	return 0;
}