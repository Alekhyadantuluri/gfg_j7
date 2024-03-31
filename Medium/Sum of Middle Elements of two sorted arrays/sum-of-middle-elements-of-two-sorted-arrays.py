#User function Template for python3

class Solution:
	def findMidSum(self, arr1, arr2, n): 
	    arr1 = arr1+arr2
	    arr1 = sorted(arr1)
	    return arr1[n]+arr1[n-1]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n=int(input())
        ar1=list(map(int, input().strip().split()))
        ar2=list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMidSum(ar1, ar2, n)
        print(ans)
        tc=tc-1

# } Driver Code Ends