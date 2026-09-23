/*Finds the largest and second-largest distinct elements in a dynamically 
allocated array using two traversals.*/

#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Enter Size : ";
	cin >> n;
	
	if (n<2)
    {
        cout << "At least two elements are required";
        return 0;
    }
	
	int *arr = new int[n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Values : ";
		cin >> *(arr+i);
	}
	
	int max  = *(arr);
	
	for (int i=1; i<n; i++)
	{
		if (*(arr+i)>max)
		{
			max = *(arr+i);
		}
	}								
	
	int Smax = 0;
	bool found = false;
	
	int i=0;
	while (i<n)
	{
		if (*(arr+i)<max)
		{
			if (found==false || *(arr+i) > Smax)
			{
				Smax = *(arr+i);
				found = true;
			}
		}
		
		i++;
	}
	
	cout << "\nLargest Element : " << max;
	
	if (found)
	{
		cout << "\nSecond Largest : " << Smax;
	}
	
	else 
	{
		cout << "\nSecond largest does not exist";
	}
	
	delete[] arr;
	arr = nullptr;
}
