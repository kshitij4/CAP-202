#include <iostream>

using namespace std;

class ave
{
    int a,b;
public:
    void init(int x,int y)
    {
        a=x;
        b=y;
    }
    friend int cal(ave);
};
int cal(ave obj)
{
    int x;
    x=(obj.a+obj.b)/2;
    return x;
}
int main()
{
    int a,b;
    ave obj;
    cout << "\n enter the two numbers:" << endl;
    cin>>a>>b;
    obj.init(a,b);
    cout<<"\n average of the two numbers is:"<<cal(obj);
    return 0;
}
