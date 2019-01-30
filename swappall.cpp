#include<iostream>
using namespace std;

class swapp
{
    int a,b;

public:
void swap1(int a,int b)
{    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap"<<endl<<a<<endl<<b<<endl;

}
};
int main()
{  swapp s;
  s.swap1(4,3);
  
    return 0;
    }



