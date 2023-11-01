#include <iostream> 

using namespace std; 

int linearSearch(int arr[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main() 
{ 
	int arr[] = { 1, 10, 30, 15 }; 
	int x = 30; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = linearSearch(arr, n, x); 
	if (result == -1) 
		cout << "Element is not present in array" << endl; 
	else
		cout << "Element is present at index " << result << endl; 
	return 0; 
}