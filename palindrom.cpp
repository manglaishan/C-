#include <iostream>

using namespace std;
class palindrom
{
	public:
		void pali(int n)
		{
			int ans,rem,sum=0;
			ans=n;
			while(n>0)
			{
				rem=n%10;
				sum=sum*10+rem;
				n=n/10;
			}
		    if(ans==sum)
		    cout<<"Number entered is palindrom";
		else
		cout<<"Entered number is not palindrom";
	
		}
};
int main()
{
	int num;
	cout<<"enter number\n";
	cin>>num;
	palindrom p;
	p.pali(num);
	
	return 0;
	
}
