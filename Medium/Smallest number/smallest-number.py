#User function Template for python3
class Solution:
    def smallestNumber (self, S, D):
        s1=[9]*D
        s2 = 9*D
        if s2 < S:
            return -1
        sr=""
        k = s2-S
        i = 0
        while(k>0 and i < len(s1)):
            if k > 8 and i==0:
                s1[i]-=8
                k-=8
            elif k>9:
                s1[i]-=9
                k-=9
            else:
                s1[i]-=k
                k=0
            i+=1
        for i in s1:
            sr+=str(i)
        return sr
                
        
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S,D=map(int,input().strip().split(" "))

        ob = Solution()
        print(ob.smallestNumber(S,D))
# } Driver Code Ends