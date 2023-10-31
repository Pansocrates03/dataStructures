// array to be sorted 
int a[] = {9, 4, 8, 3, 1, 6, 5, 2, 7}; 

// size of array 
int n = sizeof(a) / sizeof(a[0]); 

// loop through the entire array 
for (int i = 0; i < n - 1; i++) 
{ 
	// loop through the array elements 
	for (int j = 0; j < n - i - 1; j++) 
	{ 
		// compare adjacent elements 
		if (a[j] > a[j + 1]) 
		{ 
			// swap elements 
			int temp = a[j]; 
			a[j] = a[j + 1]; 
			a[j + 1] = temp; 
		} 
	} 
} 