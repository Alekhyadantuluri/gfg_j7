#User function Template for python3
class Solution:
    def search(self, pat, txt):
        l=[]
        a = len(txt)
        b = len(pat)
        for i in range((a-b)+1):
            if txt[i] == pat[0] and txt[i:i+b] == pat:
                l.append(i+1)
        return l
        
            
        
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends