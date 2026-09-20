#include <iostream>
using namespace std;
int main ()
{
	int num1 = 10;
	float num2 = 7.9f;
	double num3 = 34.876;
	char a = 'N';
	bool check = true;
	
	cout << "Integer : " << sizeof(num1);
	cout << "\nFloat : " << sizeof(num2);
	cout << "\nDouble : " << sizeof(num3);
	cout << "\nChar : " << sizeof(a);
	cout << "\nBool : " << sizeof(check);
	
	return 0;
}
