//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod = 1000000007;
    vector<int> Series(int n) {
        // Code here
        vector<int>result;
        result.push_back(0);
        result.push_back(1);
        for(int i = 2; i <= n ;i++){
            int lala =(result[i-1]%mod+result[i-2]%mod)%mod;
            result.push_back(lala);
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends