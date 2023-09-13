#include<iostream>
using namespace std;

class Currency
{
    public:

    string name;
    float amount;

    public:

    Currency(string n,float a)
    {
        name=n;
        amount=a;
    }
    Currency AddCurrency(Currency other)
    {
        return Currency(name,amount+other.amount);
    }
};
int main()
{
    string name1; string name2;
    float amount1; float amount2;

    cout<<"Enter first currency details:"<<endl;
    cout<<"Enter name:";cin>>name1;
    cout<<"Enter amount:";cin>>amount1;
    Currency currency1(name1,amount1);

    cout<<endl;

    cout<<"Enter second currency details:"<<endl;
    cout<<"Enter name:";cin>>name2;
    cout<<"Enter amount:";cin>>amount2;
    Currency currency2(name2,amount2);

    cout<<endl;

    Currency result=currency1.AddCurrency(currency2);

    cout<<"Details after adding currency:"<<endl;

    cout<<"Currency:"<<result.name<<endl;
    cout<<"Amount:"<<result.amount;

    return 0;

}