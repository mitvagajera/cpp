#include<iostream>
using namespace std;

class mother{
	public:
		string name;
		int age;
		
		void setdataM()
		{
			cout << "enter mother name : ";
			cin >> name; 
			cout << "enter mother age : ";
			cin >> age;	
		}
		
		void getdataM()
		{
			cout << "mother name\t : " << name << endl
			     << "mother age\t : " << age << endl;
		}
};

class daughter : public mother{
	public :
		string name;
		int age;
		
		void setdataD()
		{
			cout << "enter daughter name : ";
			cin >> name;
			
			cout << "enter daughter age :";
			cin >> age;
		}
		
	void getdataD()
	{
		cout << "daughter name\t : " << name << endl
		     << "daughter age\t : " << age << endl;
		}	
};

int main(){
	daughter d1;
	
	d1.setdataM();
	d1.setdataD();
	
	d1.getdataM();
	d1.getdataD();
}
