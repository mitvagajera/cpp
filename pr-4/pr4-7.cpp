#include <iostream>
using namespace std;
class hotel
{
private:
string name;
public:
hotel(string name)
{
cout << endl
<< "Welcome to the hotel..." << endl;
this->name = name;
cout << "Name : " << name << endl<<endl;
}
};
int main()
{
hotel h1("zenisha");
}
