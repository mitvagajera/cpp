#include<iostream>
using namespace std;

class an
{
	public:
		int age;
		string name;
		
		private:
			void setdata()
			{
				cout << "enter age :";
				cin >> age:
					
				cout << "enter name :" << endl;
				cin >> name;
			}
};
class zebra : public animal
{
	public :
		void zebra()
		{
			age=15;
			
			cout << "the name of zebra is :" << name << "zebra age is :" << age <<endl << "zebra is from africa";
		}
};
class dolpin : public animal
{
	public:
		void dolpin()
		{
			age = 20;
			
			cout << "the name of dolphin is :" << name << "dolphin age is :" <<age << endl << "dolphin is from africa ";
		}
};
int main()
{
	zebra z1;
	dolphin d1;
	
	z1.setdata();
	d1.setdata();
	
	z1.getdata();
	d1.getdata();
	
}
