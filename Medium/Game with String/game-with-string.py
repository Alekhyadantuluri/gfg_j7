#User function Template for python3

class Solution:
    def minValue(self, s, k):
        # code here
        d={}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        a = list(d.values())
        while(k>0):
            a=sorted(a)
            a[-1]=a[-1]-1
            k-=1
        c = 0
        for i in a:
            w = i*i
            c+=w
        return c

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        k = int(input())
        
        ob = Solution()
        print(ob.minValue(s, k))
# } Driver Code Ends