#include <iostream>

using namespace std;

class circle
{
    int r;

public:
    circle(int x)
    {
        r=x;
    }
    float CirArea()
    {
        return( 3.14f*r*r);
    }

};
class rect:public circle
{
    int l,b;
public:
    rect(int x,int y):circle(x)
    {
        l=x;
        b=y;

    }
    int RectArea()
    {
            return(l*b);
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    rect lmn(x,y);
    cout<<"\narea of circle:"<<lmn.CirArea();
    cout<<"\narea of rectangle:"<<lmn.RectArea();
    return 0;
}
