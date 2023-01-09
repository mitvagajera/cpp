#include<iostream>
using namespace std;

class employee
{
	private :
		int employee_id;
		string employee_name;
		int employee_age;
		
		public :
			void setdata()
			{
				cout << "enter employee_id :" << endl;
				cin >> employee_id;
				cout << "enter employee_name :" << endl;
				cin >> employee_name;
				cout << "enter employee_age :" << endl;
				cin >> employee_age;
			}
			void getdata()
			{
				cout << "employee_id :" << employee_id << endl
			   	     << "employee_name :" << employee_name << endl
			       	 << "employee_age :" << employee_age << endl
				     
			}		
};
class salary : public employee
{
	private :
		float monthly_salary;
		int exp;
		
		public :
			void setsalary()
			{
				cout << "enter monthly_salary : " << endl;
				cin >> monthly_salary:
					
				cout << "enter exp : " << endl;
				cin >> exp;	
			}
			void getsalary()
			{
				cout << "monthly_salary : " << monthly 
			}
}                    






                   ????????
