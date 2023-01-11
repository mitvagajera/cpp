#include<iostream>
using namespace std;

class A
{
	public:
		void sum(int a,int b)
		{
			cout << a+b;
		}
		
};
class b:public A
{
	public:
		void sum(int a,int b)
		{
			cout << a << " + " << b << " = " << a + b  << endl;
		}
};
int main()
{
	B b1;
	b1.sum(10,5);
	return 0;
}
