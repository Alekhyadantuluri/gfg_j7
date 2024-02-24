//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int maximize(int num){
        if(num<=11) return num;
        int a = maximize(num/2)+maximize(num/3)+maximize(num/4);
        return max(a,num);
    }
        int maxSum(int n)
        {
            return maximize(n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends