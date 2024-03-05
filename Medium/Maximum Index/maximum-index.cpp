//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        vector<int>maxarr;
        vector<int>minarr;
        int mini = arr[0];
        minarr.push_back(mini);
        for(int i = 1; i < n; i++){
            mini = min(mini,arr[i]);
            minarr.push_back(mini);
            //  cout << mini;
        }
        // cout << minarr;
        int maxi=arr[n-1];
        maxarr.push_back(arr[n-1]);
        for(int i = n - 2; i >= 0; i--){
            maxi = max(maxi,arr[i]);
            maxarr.push_back(maxi);
            //  cout << maxi;
        }
        reverse(maxarr.begin(),maxarr.end());
        int a = 0;
        int b = 0;
        int m = 0;
        while(a<n and b<n){
            while(a<n and maxarr[a] >= minarr[b]) a+=1;
            m=max(m,a-b-1);
            if(a==n or b==n) return m;
            b+=1;
            a+=1;
        }
        return m;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends