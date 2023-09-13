#include<iostream>
using namespace std;

class Employee
{
    public:
    int id;
    string name;
    float salary;

    void getdata(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<id<<" "<<endl<<name<<" "<<endl<<salary<<" "<<endl;
    }
};
int main()
{
    Employee e1;

    int id;
    string name;
    float salary;

    cout<<"Enter id:";cin>>id;
    cout<<"Enter name:";cin>>name;
    cout<<"Enter salary";cin>>salary;

    e1.getdata(id,name,salary);
    e1.display();

    return 0;
}