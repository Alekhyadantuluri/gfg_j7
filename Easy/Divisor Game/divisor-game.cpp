//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool divisorGame(int N) {
        if (N==0) return true;
        if (N==1) return false;
        return divisorGame(N-2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N; 
        cin >> N;
        
        Solution obj;
        bool ans = obj.divisorGame(N);
        if(ans) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}
// } Driver Code Ends