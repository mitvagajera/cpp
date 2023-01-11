#include <iostream>
using namespace std;

class A
{
	protected:
		int a = 10;
	public:
		virtual void disA()
 {
    cout << "\nValue of A : " << a << endl <<endl;
 }
};

class B : virtual public A
{
	protected:
		int b = 70;
	public:
		virtual void disB()
 {
    cout << "Value of B : " << b << endl <<endl;
 }
};

