#include<iostream>
using namespace std;

class member
{
	public :
		void print()
		{
			cout << "hello " << endl;
		}
		void print(string name)
		{
			cout << "name \t :" << name << endl;
		}
		void print(string city.int age)
		{
			cout <<"city\t :" << city << endl;
			cout << "age\t :" << age << endl;
		}
		void printf(string email.long long contact,string add)
		{
			cout << "email\t :" << email << endl;
			cout << "contact\t :" << contact << endl;
			cout << "add\t :" << add << endl;
			
		}
};

int main()
{
	member m;
	
	m.printf();
	m.printf("mitva");
	m.printf("surat",18);
	m.printf("mitvagajera@gmail.com" ,7622058350,"mota varachaa");
	
	return 0;
	
}
