#include<iostream> 
#include<algorithm> 
using namespace std; 
void sort(int arr[], int n) 
{ 
	sort(arr, arr+n); 
	for (int i=0; i<n-1; i += 2) 
	{
	    int temp=arr[i];
	    arr[i]=arr[i+1];
	    arr[i+1]=temp;
	}
} 
int main() 
{ 
	int arr[] = {1,2,3,4}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	sort(arr, n); 
	for (int i=0; i<n; i++) 
	cout << arr[i] << " "; 
	return 0; 
} 