#include<iostream>
using namespace std;

class Employee
{
    public:

    string name;
    float salary;
    int age;

    void getdata()
    {
        cout<<"Enter employee name:";cin>>name;
        cout<<"Enter employee salary:";cin>>salary;
        cout<<"Enter employee age:";cin>>age;
    }
    void show()
    {
        cout<<"Name:"<<name<<endl<<"Salary:"<<salary<<endl<<"Age:"<<age<<endl;
    }
};
int main()
{
    Employee e1,e2,e3;

    cout<<"Enter details of employees:"<<endl;;
    e1.getdata();
    cout<<endl;
    e2.getdata();
    cout<<endl;
    e3.getdata();

    cout<<endl;

    cout<<"Details of employees:";
    e1.show();
    cout<<endl;
    e2.show();
    cout<<endl;
    e3.show();

    return 0;
}