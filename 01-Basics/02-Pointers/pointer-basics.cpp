#include <iostream>
using namespace std;
int main ()
{
	int a=10;
	cout << "Value of A : " << a;
	cout << "\nAddress of A : " << &a << endl;
	
	int *ptr=&a;
	cout << "\nAddress stored at ptr : " << ptr;
	
	*ptr=20;
	cout << "\nNew Value of A : " << a;
	
	return 0;

}
