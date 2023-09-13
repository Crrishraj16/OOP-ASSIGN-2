#include<iostream>
using namespace std;

inline float Area(float radius)
{
    return 3.14*radius*radius;
}
inline float Circum(float radius)
{
    return 2*3.14*radius;
}
int main()
{
    float radius,area,circum;

    cout<<"Enter radius of circle:";cin>>radius;

    area=Area(radius);
    circum=Circum(radius);

    cout<<"Area of circle is:"<<area<<endl;
    cout<<"Circumference of circle is:"<<circum;

    return 0;
}