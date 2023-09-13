#include<iostream>
using namespace std;

inline int Check(int num)
{
    return num>0;
}
int main()
{
    int num;
    cout<<"Enter a number:";cin>>num;

    if(Check(num))
    {
        cout<<"Number is positive";
    }
    else 
    {
        cout<<"Number is negative";
    }
    return 0;
}