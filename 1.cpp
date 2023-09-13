#include<iostream>
using namespace std;
class employee{
	public:
		string name;
		int salary;
		int age;
		
		void getdata()
		{
			cout<<"enter the name:"<<endl;
			cin>>name;
			cout<<"enter the salary:"<<endl;
			cin>>salary;
			cout<<"enter the age:"<<endl;
			cin>>age;
		}
		void show()
		{
			cout<<"name"<<name<<endl;
			cout<<"salary"<<salary<<endl;
			cout<<"age"<<age<<endl;
		}
};
int main()
{
	employee emp1,emp2,emp3;
	emp1.getdata();
	emp1.show();
	emp2.getdata();
	emp2.show();
	emp3.getdata()
	emp3.show();
	
	
	return 0;
}
