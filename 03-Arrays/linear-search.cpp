//Implements Linear Search to find a given key in an array and display its index when found.

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	
	int arr[n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Elemet " << i+1 << " : ";
		cin >> arr[i];
	}
	
	bool found= false;
	int key;
	cout << "\nEnter Key : ";
	cin >> key;
	
	for (int i=0; i<n; i++)
	{
		if (arr[i]==key)
		{
			cout << "Key " << arr[i] << " Found at Index " << i << endl;
			found = true;
		}	
	}
	
	if (found==false)
	{
		cout << "Key Not Found";
	}
}
