//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void movedisk(int n,int start,int help,int des,long long &cnt){
        if (n>0){
            movedisk(n-1,start,des,help,cnt);
            cout<<"move disk "<<n<<" from rod "<<start<<" to rod "<<des<<endl;
            cnt++;
            movedisk(n-1,help,start,des,cnt);
        }
    }
    long long toh(int n, int start, int des, int help) {
        long long cnt = 0;
        movedisk(n,start,help,des,cnt);
        return cnt;
        
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends