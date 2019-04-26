#include<iostream>
using namespace std;
void main()
{
	LStack<char>bracket;
	char read_in = cin.get();
	while( read_in != '\n')
	{
		if(read_in == '{'||read_in == "["||read_in == '(')//���뿪����
			bracket.push(read_in);
		else if(read_in == '}'||read_in == ']'||read_in == ')')//���������Ƿ�ƥ��
			{
				if(bracket.IsEmpty())
				{
					cout<<"Unmatched closing bracket"<<read_in<<"is detected"<<endl;
					return;
				}
				char open_bracket;
				bracket.pop(open_bracket);
				if(!((open_bracket == '('&&read_in == ')')||(open_bracket == '['&&read_in == ']')
					||(open_bracket == '{'&&read_in == '}')))//���Ų�ƥ��
					{
						cout<<"Bad match"<<read_in<<open_bracket<<endl;
						return;
					}
			}
			read_in = cin.get();
	}
	if(!bracket.IsEmpty())
		cout<<"Unmatched opening bracket detected."<<endl;

}
