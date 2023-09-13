#include<iostream>
using namespace std;

class A
{
    int n1,n2;

    public:
    
    A(int a,int b)
    {
        n1=a;
        n2=b;
    }
    int add()
    {
        return n1+n2;
    }
    int sub()
    {
        return n1-n2;
    }

};

int main()
{
    int n1,n2;

    cout<<"Enter two numbers:";cin>>n1>>n2;

    A A(n1,n2);

    cout<<"Addition is:"<<A.add()<<endl;
    cout<<"Subtraction is:"<<A.sub();

    return 0;
}