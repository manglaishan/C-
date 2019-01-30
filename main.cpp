#include <iostream>

using namespace std;
/* class honey
{
    public:
void read(int *p);
void display(int *p);
};
void honey::read(int *p)
{
   for (int i=0;i<5;i++)
   {
       cin>> *(p+i);
   }
}
void honey:: display(int *p)
{
    for (int i=0;i<5;i++)
   {
       cout<< *(p+i)<<endl;
   }
   delete []p;
}
int main()
{
    int *p;
    p=new int[5];
    honey h;
    h.read(p);
    h.display(p);
} */
class operations
{

public:
    void add(int *p,int *q)
    {
        int c;
        c= *p + *q;
        cout<<c<<endl;
    }
    void subtract(int *p,int *q)
    {
        int c;
        c= *p - *q;
        cout<<c<<endl;
    }
    void multiply(int *p,int *q)
    {
        int c;
        c= *p * *q;
        cout<<c<<endl;
    }
    void divide(int *p,int *q)
    {
        int c;
        c=*p/ *q;
        cout<<c;
    }
};
int main()
{
   int *p;
   int *q;
   operations op;
   p=new int;
   q=new int;
    cin>> *p;
    cin>> *q;
    op.add(p,q);
    op.subtract(p,q);
    op.multiply(p,q);
    op.divide(p,q);
    return 0;
}
