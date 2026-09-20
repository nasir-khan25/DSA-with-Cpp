#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main ()
{
	int x , y = 0;
	cout << "Enter Two Numbers of Your Choice to Swap \n Enter First Num : \n";
	cin >> x;
	cout << "Enter Second Num : \n";
	cin >> y;
	
	swap(x,y);
	cout << "Swapped First Num is  " << x << "\nSwapped Second Num is " << y << endl;
	
	return 0;
}
