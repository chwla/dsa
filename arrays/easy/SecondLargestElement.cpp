//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    if(n< 2){
	       return -1;
	    }
	    sort(arr, arr+n);
	    int a = -1;
	    for(int i = n-1; i > 0; i--){
	        if(arr[i] > arr[i-1]){
	            a = arr[i-1];
	            break;
	        }
	    }
	    return a;
	}
};