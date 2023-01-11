#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		
	public:
		void setdata()
		{
			cout << "enter any number : " << endl;
			cin >> a;
		}
		void getdata()
		{
			cout << "value of a is : " << a << endl;
		}
		void operator++()
		{
			a = ++a;
		}
		void operator --()
		{
			a = --a;
			
		}
};
int main()
{
	A a;
	a.setdata();
	
	cout << "after increment :" << endl;
	++a;
	a.getdata();
	
	cout << "after decrenment :" << endl;
	--a;
	a.getdata();
	return 0;
}
