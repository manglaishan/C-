#include <iostream>

using namespace std;
class fibo
{
public:
void fib(int n)
{
int a=0,b=1,c;
cout<<a<<"\n"<<b;
for(int i=0;i<n;i++)
	{
	c=a+b;
	cout<<"\n"<<c;
	a=b;
	b=c;	
	}	
}
};
int main()
{
	int num;
	cout<<"enter no. of terms \n";
	cin>>num;
	fibo f;
	f.fib(num);
	return 0;
	
}
