#include<iostream>
using namespace std;

class Paper
{
    private:

    float width;
    float height;

    public:

    Paper(float w,float h)
    {
        width=w;
        height=h;
    }
    float Width()
    {
        return width;
    }
    float Height()
    {
        return height;
    }
};
float Area(Paper paper)
{
    return paper.Width()*paper.Height();
}
float Perimeter(Paper paper)
{
    return 2*( paper.Width()+paper.Height());
}
int main()
{
    float width,height;

    cout<<"Enter width and height of paper:";cin>>width>>height;

    Paper paper(width,height);

    float area=Area(paper);
    float perimeter=Perimeter(paper);

    cout<<"Area of paper:"<<area<<endl;
    cout<<"Perimeter of paper:"<<perimeter<<endl;

    return 0;
}

