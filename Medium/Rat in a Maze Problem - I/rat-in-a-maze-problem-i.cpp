//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void rat(int i, int j,int n,vector<vector<int>>m,vector<string>&main,string s){
        if(i>=n || j>=n || i<0 || j<0){
            return;
        }
        if(i==n-1 && j==n-1){
            main.push_back(s);
            return;
        }
        if(m[i][j]==0 || m[i][j]==-1){
            return;
        }
        m[i][j]=-1;
        rat(i+1,j,n,m,main,s+"D");
        rat(i,j+1,n,m,main,s+"R");
        rat(i-1,j,n,m,main,s+"U");
        rat(i,j-1,n,m,main,s+"L");
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>main;
        string s;
        if(m[0][0]==0 || m[n-1][n-1] == 0){
            return vector<string>();
        }
        rat(0,0,n,m,main,s);
        return main;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends