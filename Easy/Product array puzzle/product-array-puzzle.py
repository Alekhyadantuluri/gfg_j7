#User function Template for python3

class Solution:
    def productExceptSelf(self, nums, n):
        p=1
        l=[]
        for i in range(n):
            if nums[i]!=0:
                p*=nums[i]
        if nums.count(0)>1:
            return [0]*n
        elif nums.count(0)==1:
            for j in range(n):
                if nums[j] == 0:
                    l.append(p)
                else:
                    l.append(0)
        else:
            for i in range(n):
                l.append(p//nums[i])
        return l

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())

    for _ in range(t):
        n=int(input())
        arr=[int(x) for x in input().split()]

        ans=Solution().productExceptSelf(arr,n)
        print(*ans)
# } Driver Code Ends