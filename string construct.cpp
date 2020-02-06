#include <iostream>

using namespace std;

class student
{
    int roll;
    char n[30];
    pubic:
        student(int r,char na[])
        {
            roll=r;
            strcpy(n,na);
        }
        void disp()
        {
            cout<<"record:\n"<<n<<" "<<roll;
        }
};
int main()
{
    int rl;
    char na[30];
    cout<<"\nenter roll:";
    cin>>rl;
    cout<<"\nenter name:";
    gets(na);
    student ob(r1,na);
    ob.disp();


    return 0;
}
