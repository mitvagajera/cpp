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
};
class company : public salary
{
	pivate :
		string company_name;
		string address :
			
	public:
		void setcompany()
		{
			
			cout << "enter company_name :" << endl;
			cin >> company_name;
			
			cout << "enter address :" << endl;
			cin >> address;
		}
		
		void getcompany()
		{
			cout << "company_name :" << company_name << "adress : " <<
		}
};
class contact : public company 
{
	private:
		string email;
		int contactno;
		
	public:
		void setemail()
		{
			cout << "enter email :" << endl;
			cin >> email;
			
			cout << "enter contactno :" << endl;
			cin >> contactno; 
		}
		void getemail()
		{
			cout << "email :" << email << "contactno :"  << contactno <<
		}
};
int main()
{
	contact c;
	
	
	c.setdata();
	c.setsalary();
	c.setcompany();
	c.setemail();
	c.getdata();
	c.getsalary();
	c.getcompany();
	c.getemail();

 };
	                          






                  
