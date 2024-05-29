#include<iostream>
using namespace std;
class A
{
public :
    int x;
    A()
    {
        x=5;
        cout<<"A called"<<endl;
    }
};
class B : virtual public  A
{
public :
    B()
    {
        cout<<"B() called"<<endl;
    }
};

class C : virtual public A
{
public :
    C()
    {
        cout<<"C () Called"<<endl;
    }
};

class D : public B, public C
{
public :
    D()
    {
        cout<<"D() Called"<<endl;
    }
};

int main()
{
    D d;
    cout<<"D.x ="<<d.x<<endl;
    system ("pause");
    return 0;
    
}
