#include <iostream>

using namespace std;

class prime
{
    int check();
    int x;
public:
    prime()
    {
        x=0;
    }
    prime(int y)
    {
        x=y;
    }
    void disp();
};
void prime ::disp()
{
    if(check())
        cout<<x<<" is prime";
    else
        cout<<x<<" is not prime";
}
int prime ::check()
{
    int f=1;
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(!(x%i))
        {
            f=0; break;
        }
    }
    return (f);
}
int main()
{
    int a;
    cout<<"\nenter the number:";
    cin>>a;
    prime obj(a);
    obj.disp();
    return 0;
}
