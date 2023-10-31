// Function to implement quicksort in C++ 
void quicksort(int arr[], int left, int right) 
{ 
	// Create an index for our pivot element 
	int i = left, j = right; 
	// Select the first element in the array as the pivot element 
	int pivot = arr[left]; 

	// Create a while loop to iterate through the array and partition it 
	while (i <= j) 
	{ 
		// Iterate through the array until we find an element that is greater than the pivot 
		while (arr[i] < pivot) 
			i++; 

		// Iterate through the array until we find an element that is less than the pivot 
		while (arr[j] > pivot) 
			j--; 

		// If the two elements are not in the correct order, swap them 
		if (i <= j) 
		{ 
			int temp = arr[i]; 
			arr[i] = arr[j]; 
			arr[j] = temp; 
			i++; 
			j--; 
		} 
	} 

	// Recursively call the quicksort function on the left and right sub-arrays 
	if (left < j) 
		quicksort(arr, left, j); 
	if (i < right) 
		quicksort(arr, i, right); 
} 
