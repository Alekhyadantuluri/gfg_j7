//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long  dp[1000001];
	long long coins(vector<int> c,int m,int v){
	    if (v==0) return 0;
	    long long ans = INT_MAX;
	    if (dp[v]!=-1) return dp[v];
	    for(int i = 0 ; i < m ; i++){
	        if(c[i]<=v) ans = min(ans,1+coins(c,m,v-c[i]));
	    }
	    return dp[v]=ans;
	}
	int minCoins(vector<int> &c, int m, int v) 
	{ 
	    memset(dp,-1,sizeof(dp));
	    int a=coins(c,m,v);
	    if(a==INT_MAX)
	       return -1;
	    else
	       return a;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends