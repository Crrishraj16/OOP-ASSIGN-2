#include<iostream>
using namespace std;

float Area(float radius)
{
    return 3.14*radius*radius;
}

float Area(float length,float width)
{
    return length*width;
}

float Area(int side)
{
    return side*side;
}

int main()
{
    float radius,length,width;
    int side;

    cout<<"Enter radius of circle";cin>>radius;
    cout<<"Area of Circle is:"<<Area(radius)<<endl;

    cout<<endl;

    cout<<"Enter length and width of rectangle:";cin>>length>>width;
    cout<<"Area of rectangle is:"<<Area(length,width)<<endl;

    cout<<endl;

    cout<<"Enter side of square:";cin>>side;
    cout<<"Area of square is:"<<Area(side);

    return 0;
}