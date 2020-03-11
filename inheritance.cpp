#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class student
{
    int roll;
    long phnNo;
    char name[30];
    char email[20];
public:
    void getData(int,long ,char[],char[] );
    void putData();
};
void student::getData(int rn,long phn,char nm[30],char em[20])
{
    roll=rn;
    phnNo=phn;
    strcpy(name,nm);
    strcpy(email,em);
}
void student::putData()
{
    cout<<"\nRoll no:"<<roll;
    cout<<"\nPhone no:"<<phnNo;
    cout<<"\nName:"<<name;
    cout<<"\nEmail:"<<email;
}
class academic:public student
{
    int sub1,sub2,sub3;
    float schShip;
    char grade;
public:
    void getMarks(int,int,int);
    char calGrade();
    void calSch();
};
void academic::getMarks(int s1,int s2,int s3)
{
    sub1=s1;
    sub2=s2;
    sub3=s3;
}
char academic::calGrade()
{
    int avg;
    avg=(sub1+sub2+sub3)/3;
    cout<<"\nAverage :"<<avg;
    if(avg>=90)
    {
        return ('O');
    }
    else if(avg>=80)
    {
        return ('A');
    }
    else if(avg>=70)
    {
        return ('B');
    }
    else if(avg>=60)
    {
        return ('C');
    }
    else
    {
        return('D');
    }
}
void academic::calSch()
{
    char x;
    x=calGrade();
    cout<<"\nGrade:"<<x;
    switch(x)
    {
        case 'O':
        {
            cout<<"\nScholarship is 60%"; break;
        }
        case 'A':
        {
            cout<<"\nScholarship is 50%"; break;
        }
        case 'B':
        {
            cout<<"\nScholarship is 40%"; break;
        }
        case 'C':
        {
            cout<<"\nScholarship is 30%"; break;
        }
        default:
            {
                cout<<"\nNo scholarship";break;
            }
    }

}
int main()
{
    int rn,s1,s2,s3;
    long ph;
    char name[30],email[20];
    academic obj;
    cout<<"\n\n---Enter Student details:---\n";
    cout<<"\nRoll no:";
    cin>>rn;
    cout<<"\nPhn number:";
    cin>>ph;
    cout<<"\nName:";
    cin>>name;
    cout<<"\nEmail:";
    cin>>email;
    obj.getData(rn,ph,name,email);
    cout<<"\n\nEnter marks:\n";
    cout<<"Subject 1:";
    cin>>s1;
    cout<<"\nSubject 2:";
    cin>>s2;
    cout<<"\nSubject 3:";
    cin>>s3;
    obj.getMarks(s1,s2,s3);
    cout<<"\nYour Students details are:\n";
    obj.putData();
    obj.calGrade();
    obj.calSch();
    return 0;
}
