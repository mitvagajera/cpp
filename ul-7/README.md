<h1>Ch-7</h1>
<u>**Aim **</u> : 1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.

<u>**Program**</u> :

    #include<iostream>
    using namespace std;

    class admin{
        private :
            int annual;
        protected :
            string can;
            int managersalary;
        public :
        string  companyname;
        int esalary,ts;

        void myaccess(){
            cout <<"enter the company name = ";
            cin  >>companyname;
            cout <<"enter the manager salary = ";
            cin  >>managersalary;
            cout <<"enter the employee salary = ";
            cin  >>esalary;
            cout <<"enter the total staff member = ";
            cin  >>ts;
            cout <<"enter the can terminate (YES or NO) = ";
            cin  >>can;
            cout <<"enter the annual revenue = ";
            cin  >>annual;

            cout <<endl;
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"\t\t----company  all data for admin---- "<<endl;
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"company name = "<<companyname<<endl
                <<"manager salary = "<<managersalary<<endl
                <<"employess salary = "<<esalary<<endl
                <<"total staff member = "<<ts<<endl
                <<"can terminate (YES or NO) = "<<can<<endl
                <<"annual revenue = "<<annual<<endl<<endl<<endl;
                }
    };

    class manager : protected admin{
        int s;
        protected :
        void myaccess(){
            admin :: myaccess();
            s = managersalary;
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"\t\t----company  all data for manager---- "<<endl;
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"company name = "<<companyname<<endl
                <<"manager salary = "<<s<<endl
                <<"employess salary = "<<esalary<<endl
                <<"total staff member = "<<ts<<endl
                <<"can terminate (YES or NO) = "<<can<<endl<<endl<<endl;
                managersalary = 0;
                }
    };

    class employees : manager{
    public :
        void myaccess(){
            manager :: myaccess();
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"\t\t----company  all data for employee---- "<<endl;
            cout <<"---------------------------------------------------------"<<endl;
            cout <<"company name = "<<companyname<<endl
                <<"employess salary = "<<esalary<<endl
                <<"total staff member = "<<ts<<endl<<endl<<endl;
                }
    };
    int main(){
        employees E;
        E.employees ::myaccess();

    }

<u>**Output**</u> :
[Error Text]()

