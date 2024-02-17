
class Solution:
    def isMaxHeap(self,arr,n):
        # Your code goes here  
        for i in range(n//2):
            a = 2*i+1
            b = 2*i+2
            if a< n and b < n and (arr[i]<arr[a] or arr[i]<arr[b]): return 0
            else:
                if a>=n and arr[i]<arr[b]: return 0
                elif b>=n and arr[i]<arr[a]:return 0
        return 1
                    



#{ 
 # Driver Code Starts
if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n=int(input())
        arr=[int(x) for x in input().split()]
        ob=Solution()
        print(int(ob.isMaxHeap(arr,n)))
# } Driver Code Ends