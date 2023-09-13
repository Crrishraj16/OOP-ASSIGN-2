#include<iostream>
using namespace std;

int sum(int a,int b,int c,int d,int e)
{
    return a+b+c+d+e;
}
long sum(long a,long b,long c,long d,long e)
{
    return a+b+c+d+e;
}
double sum(double a,double b,double c,double d,double e)
{
    return a+b+c+d+e;
}
int main()
{
    int choice;

    cout<<"1.Sum of integers..."<<endl;
    cout<<"2.Sum of long..."<<endl;
    cout<<"3.Sum of double..."<<endl;
    
    cout<<"Enter your choice:";cin>>choice;

    if(choice==1)
    {
        int a,b,c,d,e;
        cout<<"Enter five integers:";cin>>a>>b>>c>>d>>e;
        int intsum=sum(a,b,c,d,e);
        cout<<"Sum is:"<<intsum<<endl;
    }
    else if(choice==2)
    {
        long a,b,c,d,e;
        cout<<"Enter five integers:";cin>>a>>b>>c>>d>>e;
        int longsum=sum(a,b,c,d,e);
        cout<<"Sum of long is:"<<longsum<<endl;
    }
     else if(choice==3)
    {
        double a,b,c,d,e;
        cout<<"Enter five integers:";cin>>a>>b>>c>>d>>e;
        int doublesum=sum(a,b,c,d,e);
        cout<<"Sum of double is:"<<doublesum<<endl;
    }
    else
    {
        cout<<"Invalid operation";
    }
    return 0;
}