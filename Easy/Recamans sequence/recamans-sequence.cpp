//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int>rs;
        map<int,int>d;
        rs.push_back(0);
        for(int i = 1; i < n ;i++){
            int a = rs[i-1];
            if(a-i> 0 and d.find(a-i)==d.end()){
                rs.push_back(a-i);
                d[a-i]=1;
            }
            else{
                rs.push_back(a+i);
                d[a+i]=1;
            }
        }
        return rs;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends