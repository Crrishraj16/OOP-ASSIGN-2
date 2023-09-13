#include<iostream>
using namespace std;

inline int Even(int a)
{
    return a%2==0;
}
int main()
{
    int a;
    cout<<"Enter value of a:";cin>>a;

    if(Even(a))
    {
        cout<<"Number is even";
    }
    else 
    {
        cout<<"Number is odd";
    }
    return 0;
}