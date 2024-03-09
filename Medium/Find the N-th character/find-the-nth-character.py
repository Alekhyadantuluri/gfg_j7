#User function Template for python3

class Solution:
    def nthCharacter(self, s, r, n):
        # code here
        string = ''
        for i in range(r):
            for j in range(len(s)):
                if s[j]=='1':
                    string+='10'
                else:
                    string+='01'
                if len(string)>n:
                 break
            # print(string)
            s=string
            string=''
        return s[n]
        
                    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        snr = input().split()
        S, R, N = snr[0], int(snr[1]), int(snr[2])
        ob = Solution()
        print(ob.nthCharacter(S, R, N))
# } Driver Code Ends