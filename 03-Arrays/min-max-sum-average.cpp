//Finds the largest and smallest elements, calculates the sum and average of elements in a dynamically allocated array using pointers.

#include <iostream>
using namespace std;
int main ()
{
	int size;
	cout << "Enter Size : ";
	cin >> size;
	
	int *arr = new int [size];
	
	for (int i=0; i<size; i++)
	{
		cout << "Enter Element " << (i+1) << " : ";
		cin >> *(arr+i);
	}
	
	int sum=0;
	float avg;
	int min = *arr;
	int max = *arr;
	
	for (int i=0; i<size; i++)
	{
		cout << "\nElements " << (i+1) << " : " << *(arr+i);
		sum+=*(arr+i);
		
		if (*(arr+i)>max)
		{
			max = *(arr+i);
		}
		
		else if (*(arr+i)<min)
		{
			min = *(arr+i);
		}
	}
	
	avg = (float)sum/size;
	
	cout << "\n\nLargest : " << max;
	cout << "\nSmallest : " << min;
	cout << "\nSum : " << sum;
	cout << "\nAverage : " << avg;
	
	delete [] arr;
	arr = nullptr;
}
