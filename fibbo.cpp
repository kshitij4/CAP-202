#include <iostream>

using namespace std;

class fibbo
{
    int n;
public:
    fibbo(int a)
    {
        n=a;
    }
    void disp()
    {
        int a=0,b=1,c=0;
        cout<<"\nfibbonacci series:";
        cout<<a<<" "<<b<<" ";
        for(int i=0;i<n-2;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }

};
int main()
{
    int a;
    cout<<"\nenter the range of fiboo series:";
    cin>>a;
    fibbo obj(a);
    obj.disp();

    return 0;
}
