#include <iostream>

using namespace std;
class swap1
{
public:
void callbyval(int a,int b)
{
int c;
c=a;
a=b;
b=c;
cout<<"call by value \n";
cout<<a<< "\n"<<b;
}
void callbyadd(int *d,int *e)
{
    int f;
    f=*d;
    *d=*e;
    *e=f;
    cout<<"\n call by address \n";
    cout<<*d<< "\n"<<*e;
}
void callbyref(int &m, int&n)
{

    int o;
    o=m;
    m=n;
    n=o;
    cout<<"\n call by refernce \n";
    cout<<m<<"\n"<<n;
}	
};
int main()
{
	int a,b,d,e,m,n;
	cout<<"enter no.s for call by value\n";
	cin>>a>>b;
	cout<<"enter no.s for call by address\n";
	cin>>d>>e;
		cout<<"enter no.s for call by reference\n";
	cin>>m>>n;
	swap1 s;
	s.callbyval(a,b);
	s.callbyadd(&d,&e);
	s.callbyref(m,n);
	return 0;
	
}
