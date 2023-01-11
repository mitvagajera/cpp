#include <iostream>
using namespace std;

class A
{
	public:
		virtual void zenisha()
  {
      cout << "\n\nHELLO MITVA" << endl << endl;
  }
};

class B : virtual public A
{
	public:
		void hello()
  {
	cout << "Meet : How are you???" << endl;
  }
};

class C : public A
{
	public:
		void how()
  {
	cout << "mitva : I am fine!!!" << endl << endl << endl;
  }
};

int main()
{
	B b1;
	C c1;
	
	c1.zenisha();
	b1.hello();
	c1.how();
}
