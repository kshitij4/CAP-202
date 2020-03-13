#include <iostream>

using namespace std;

class A
{
    int a;
public:
    A(){a=0;}
    A(int a)
    {
        this->a=a;
        cout<<"\nA:"<<a;
    }
};
class B:public A
{
    int b;
public:
    B();
    B(int b):A(2*b)
    {
        this->b=b;
        cout<<"\nB:"<<b;
    }
};
class C:public B
{
    int c;
public:
    C();
    C(int c):B(3*c)
    {
        this->c=c;
        cout<<"\nC:"<<c;
    }
};
int main()
{
    C obj(10);
}
