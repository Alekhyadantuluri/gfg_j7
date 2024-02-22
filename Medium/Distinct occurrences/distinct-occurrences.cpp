//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod = 1e9+7;
    int dp[1001][1001];
    int occur(int i,int j,string s,string a,string t){
        if(a == t) return 1;
        if(i==s.size()) return 0;
        int x=0,y=0;
        if (dp[i][j] != -1) return dp[i][j];
        if(s[i]==t[j]){
            x = occur(i+1,j+1,s,a+s[i],t);
        }
        y = occur(i+1,j,s,a,t);
        return dp[i][j]=(x%mod+y%mod)%mod;
    }
    int subsequenceCount(string s, string t)
    {
        string a = "";
        memset(dp,-1,sizeof(dp));
        return occur(0,0,s,a,t);
        
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends