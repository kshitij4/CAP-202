#include <iostream>

using namespace std;

class time
{
    int hr,mi,sec;
public:
    void init(int x,int y,int z)
    {
        hr=x;
        mi=y;
        sec=z;
    }
    void disp()
    {
        cout<<hr<<":"<<mi<<":"<<sec<<"\n";

    }
    friend time sum(time,time);

};
time sum(time M,time N)
{
    time O;
    O.hr=M.hr+N.hr;
    O.mi=M.mi+N.mi;
    O.sec=M.sec+N.sec;
    return O;
}
int main()
{
    int x,y,z;
    time ob1,ob2,ob3;
    cout<<"\nenter 1st time:";
    cin>>x>>y>>z;
    while(y<60 && z<60)
    {
        ob1.init(x,y,z);
    }
    cout<<"\nenter 2nd time:";
    cin>>x>>y>>z;
    ob2.init(x,y,z);
    cout<<"\ntimes are:\n";
    ob1.disp();
    cout<<endl;
    ob2.disp();
    cout<<"\nsum of times:";
    ob3=sum(ob1,ob2);
    ob3.disp();

    return 0;
}
