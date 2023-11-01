// C++ implementation of Tree Sort 
#include<iostream> 
using namespace std; 

// A binary tree node has data, pointer to left child 
// and a pointer to right child 
struct Node 
{ 
	int data; 
	Node* left; 
	Node* right; 
}; 

// Function to create a new node 
Node* newNode(int data) 
{ 
	Node* node = new Node; 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return node; 
} 

// Function to traverse the binary tree in-order 
// and store the result in an array 
void inOrder(Node* root, int arr[], int& index) 
{ 
	// Base case 
	if (root == NULL) 
		return; 

	// Traverse the left subtree 
	inOrder(root->left, arr, index); 

	// Add the data of the node to the array 
	arr[index] = root->data; 
	index++; 

	// Traverse the right subtree 
	inOrder(root->right, arr, index); 
} 

// Function to perform tree sort 
void treeSort(int arr[], int n) 
{ 
	Node* root = NULL; 

	// Create a binary tree from the given array 
	for (int i = 0; i < n; i++) 
		root = Insert(root, arr[i]); 

	// Traverse the binary tree in-order and store 
	// the result in an array 
	int index = 0; 
	inOrder(root, arr, index); 
} 

// Function to insert a node in the binary tree 
Node* Insert(Node* root, int data) 
{ 
	if (root == NULL) 
		return newNode(data); 

	if (data < root->data) 
		root->left = Insert(root->left, data); 
	else
		root->right = Insert(root->right, data); 

	return root; 
} 

// Driver program 
int main() 
{ 
	int arr[] = {4, 2, 5, 1, 3}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	cout << "Given array is \n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	treeSort(arr, n); 

	cout << "\nSorted array is \n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 