#User function Template for python3

class Solution:
    def findTwoElement( self,arr, n): 
        avg = (n*(n+1))//2
        d={}
        k=[]
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                l=i
        a =  abs(avg-(sum(arr)-l))
        k.append(l)
        k.append(a)
        return k
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends