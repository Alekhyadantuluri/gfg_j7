//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
int mod = 1000000007;
    long long sequence(int n){
        long long k = 1;
        long long s = 0;
        for(int i = 1; i < n+1; i++){
            long long p=1;
            for(int j = 0; j < i; j++){
                p=(p%mod*k%mod)%mod;
                k+=1;
            }
            s=(s%mod+p%mod)%mod;
        }
        return s;
        
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends