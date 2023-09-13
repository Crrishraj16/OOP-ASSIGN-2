#include<iostream>
using namespace std;

int sum(int x,float y)
{
    return x+y;
}
int sum(float x,int y)
{
   return x+y;
}
int main()
{
    cout<<sum(10,50.5)<<endl;
    cout<<sum(75.5,30);

    return 0;
}