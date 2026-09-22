//Calculates the total and average marks of subjects using a basic array. The array size and marks are entered by the user.

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Subject Count?\n";
	cin >> n;
	
	int arr[n];
	int sum = 0;
	float avg = 0;
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Marks : " << " \n";
		cin >> arr[i];
	}
	
	for (int i=0; i<n; i++)
	{
		cout << "Subject " << (i+1) << " Marks" << " : " << arr[i] << endl;
		sum+=arr[i];
	}
	
	avg = (float)sum / n;
	
	cout << "Total Sum : " << sum << endl;
	cout << "Average : " << avg;
}
