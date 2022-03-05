// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int n, int arr[]){
        int max1 = -1, max2= -1;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         //if (max1 == max2) return {-1};
        // if ((n == 2) && (max1 == max2)) return {max1,-1};
         for (int i = 0;i<n;i++){
             if (arr[i]>max1) {
                 max2 = max1;
                 max1= arr[i];
                 
             }
             else if((arr[i]>max2) && (arr[i] != max1)) max2 = arr[i];
             
         }
         return {max1,max2};
         
    }
};

// Driver Code
int main() {
	
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  