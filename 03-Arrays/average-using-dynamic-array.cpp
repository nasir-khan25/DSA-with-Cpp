/*Calculates the total and average marks using a dynamically allocated array. 
Demonstrates runtime array size, pointers, pointer arithmetic, and dynamic memory management.*/

#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Subjects Count\n";
	cin >> n;
	
	int *arr = new int[n];
	
	int sum = 0;
	float avg = 0;
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Subject " << (i+1) << " Marks : " << endl;
		cin >> *(arr+i);
	} 
	
	for (int i=0; i<n; i++)
	{
		cout << "Subject " << (i+1) << " Marks : " << *(arr+i) << endl;
		sum+=*(arr+i);
	}
	
	avg = (float)sum / n;
	
	cout << "\nTotal Sum : " << sum << endl;
	cout << "Average : " << avg;
	
	delete[] arr;
	arr = nullptr;
}
