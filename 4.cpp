#include<iostream>
using namespace std;
class complex{
	private:
		double real;
		double imaginary;
	
	public:
		complex(double real,double imaginary)
		{
			this->real=real;
			this->imaginary=imaginary;
		}
		
		double getreal()
		{
			return real;
		}
		double getimaginary()
		{
			return imaginary;
		}
		complex operator+(const complex& other)
		{
			return complex(real+other.real,imaginary+other.imaginary);
		}
};
int main()
{
	complex c1(10,20);
	complex c2(30,40);
	complex c3=c1+c2;
	cout<<c3.getreal()<<""<<c3.getimaginary()<<endl;
	return 0;
}
