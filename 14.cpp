#include<iostream>
using namespace std;

class Demo
{
    private:
    int a;

    public:
    friend void display(Demo);

};

void display(Demo d)
{
    
    cout<<"Enter value of a:";cin>>d.a;
    cout<<"Value of a is:"<<d.a<<endl;
}
int main()
{
    Demo d;
    display(d);
    return 0;
}