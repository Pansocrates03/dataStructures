// Returns the index of the element if it is found in the array, else returns -1 
int binarySearch(int arr[], int low, int high, int x) 
{ 
    if (high >= low) 
    { 
        int mid = (low + high)/2; 
  
        // If the element is present at the middle itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then it can only be present 
        // in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, low, mid-1, x); 
  
        // Else the element can only be present in right subarray 
        return binarySearch(arr, mid+1, high, x); 
    } 
  
    // We reach here when element is not present in array 
    return -1; 
} 