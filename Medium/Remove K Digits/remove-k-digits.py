#User function Template for python3

class Solution:

    def removeKdigits(self, S, K):
        s=[]
        for i in range(len(S)):
            while(s and K> 0 and s[-1]>S[i]):
                s.pop()
                K-=1
            s.append(S[i])
        while(K>0):
            s.pop()
            K-=1
        i = 0
        while i<len(s) and s[i]=='0':
            i+=1
        if i == len(s):
            return '0'
        return "".join(s[i:])


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()
        K = int(input())

        obj = Solution()

        ans = obj.removeKdigits(S, K)

        print(ans)


# } Driver Code Ends