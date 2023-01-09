#include<iostream>
using namespace std;

class distance
{""
	private:
		int feet,inches;
	public:
		void setdistance(void)
		{
			cout <<"enter feet :"; cin >> feet;
			cout << "enter inches :";cin >> inches;
		}
		
		void getdistance(void)
		{
			cout << "feet:" << endl << "inches:" << inches << endl;
		}
		distance operator+(distance &dist1)
		{
		}
}
