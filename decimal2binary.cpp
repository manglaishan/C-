#include <iostream>

using namespace std;
class conversion
{
	int i,rem,sum=0,base=1;
	public:
	void convo(int n)
	{
		while(n>0)
		{
		rem=n%2;
		sum=sum+rem*base;
		n=n/2;
		base=base*10;
		}
		cout<<sum;
	}
};
int main()
{
	int num;
	 conversion f;
	cout<<"enter the value in decimal\n";
	cin>>num;
	f.convo(num);
	return 0;
	
}
