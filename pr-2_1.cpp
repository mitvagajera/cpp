include <iostream>
using namespace std;
int h1(int, int);
int h2(int);
int main()
{
int a = 10, b = 10;
h2(h1(a, b));
}
int h1(int a, int b)
{
return (a + b);
}
int h2(int a)
{
cout << "Addition is " << a;
}
