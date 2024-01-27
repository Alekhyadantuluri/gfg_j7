//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int res(int N,vector<int>&z){
        if (N<=0) return N;
        z.push_back(N);
        res(N-5,z);
    }
    void res1(int N,int a,vector<int>&z){
        z.push_back(N);
        if (N==a) return;
        res1(N+5,a,z);
    }
    vector<int> pattern(int N){
        if (N<=0){
            vector<int> z = {N};
            return z;
        }
        int a = N;
        vector<int>z;
        int A=res(N,z);
        res1(A,a,z);
        return z;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends