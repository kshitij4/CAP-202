#include <iostream>
#include<string>
#include<stdio.h>
#include<string.h>
using namespace std;

class genral
{
    int sno,hno;
    char city[30],pno[30];
    float area;
public:
    void getData(int sno,int hno,char pno[],char city[],float area)
    {
        this->sno=sno;
        this->hno=hno;
        strcpy(this->pno,pno);
        strcpy(this->city,city);
        this->area=area;
    }
    void putData()
    {
        cout<<"\nGenral values are:\n";
        cout<<"Sno:"<<sno;
        cout<<"\nHno:"<<hno;
        cout<<"\nArea:"<<area;
        cout<<"\nPno:";puts(pno);
        cout<<"\nCity:";puts(city);
    }
};
class student:public genral
{
    int rollNo;
    char name[30];
    float marks10,marks12;
public:
    void getDetails(int rollNo,char name[],float marks10,float marks12)
    {
        this->rollNo=rollNo;
        strcpy(this->name,name);
        this->marks10=marks10;
        this->marks12=marks12;
    }
    void showDetails()
    {
        cout<<"\nStudents details are:\n";
        cout<<"\nRoll no:"<<rollNo;
        cout<<"\nName:";puts(name);
        cout<<"\n10th Marks:"<<marks10;
        cout<<"\n12th Marks:"<<marks12;
    }

};
class employee:public genral
{
    char empId[30],name[30],dept[30];
    int ta,da,hra;
public:
    void getInfo(char empId[],char name[],char dept[],int ta,int da,int hra)
    {
        strcpy(this->empId,empId);
        strcpy(this->name,name);
        strcpy(this->dept,dept);
        this->ta=ta;
        this->da=da;
        this->hra=hra;
    }
    void putInfo()
    {
        cout<<"\nEmployees info are:\n";
        cout<<"\nEmpid:"<<empId;
        cout<<"\nName:"<<name;
        cout<<"\nDept:"<<dept;
        cout<<"\nTA:"<<ta;
        cout<<"\nDA:"<<da;
        cout<<"\nHRA:"<<hra;
    }

};
int main()
{
    student ob1;
    employee ob2;
    ob1.getData(1,10,"99128","jalandhar",345.67);
    ob2.getInfo("a1","gina","MCA",87,23,123);
    ob1.getDetails(10,"kshitij",98,95);
    ob1.putData();
    ob1.showDetails();
    ob2.putData();
    ob2.putInfo();
}
