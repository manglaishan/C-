#include <iostream>

using namespace std;
void callbyval(int a, int b);
void callbyadd(int *a, int *b);
void callbyref(int &a, int &b);
int main()
{
    cout << "Hello world!" << endl;
    int a,b;
    cin >> a >> b;
    callbyval(a,b);
    callbyadd(&a,&b);
    callbyref(a,b);
    return 0;
}
void callbyval(int a,int b)
{
int c;
c=a;
a=b;
b=c;
cout<<"call by value \n";
cout<<a<< "\n"<<b;
}
void callbyadd(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"\n call by address \n";
    cout<<*a<< "\n"<<*b;
}
void callbyref(int &a, int&b)
{

    int c;
    c=a;
    a=b;
    b=c;
    cout<<"\n call by refernce \n";
    cout<<a<<"\n"<<b;
}
