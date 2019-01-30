#include<iostream>
#include<string.h>

using namespace std;
class stringg
{
	char str[40];
	public:
		stringg()
		{
			strcpy(str,"");
			
		}
		stringg(char s[])
		{
			strcpy(str,s);
		}
		void read()
		{
			cin>>str;
		}
		void display()
		{
			cout<<str;
		}
		stringg operator +(string s)
		{
			strcat(str,s.str);
		}
};
int main()
{
stringg s1("programming");
stringg s2,s3;
s2.read();
s1.display();
cin.getline(str,40);
s2.display();
s3=s1+s2;//s1.operator+(s2)
s3.display();

	return 0;
}
