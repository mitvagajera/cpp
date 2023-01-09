#include<iostream>
using namespace std;

class shape{
	public:
		double width,height;
		shape(){
		cout << "enter width : ";
		cin >> width;
		cout << "enter height : ";
		cin >> height;
		}
};

class rectangle : public shape{
	public:
		void area()
		{
			cout << "area of ractangle is : " << 0.5*width*height << endl;
		}
};

class triangle : public shape{
	public:
		void area()
		{
			cout << "area of ractangle is : " << width*height << endl;
		}
};

int main(){
	rectangle r1;
	r1.area();
	
	triangle t1;
	t1.area();
}
