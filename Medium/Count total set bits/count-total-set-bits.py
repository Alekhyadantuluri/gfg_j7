#User function Template for python3
import math
class Solution:
    #Function to return sum of count of set bits in the integers from 1 to n.
    def countSetBits(self,n):
        def bits(n):
            if n == 0:
                return 0
            elif n == 1:
                return 1
            b = int(math.log2(n))
            c = b * (1<<(b-1))+n-(1<<b)+1+bits(n-(1<<b))
            return c
        return bits(n)
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        ob=Solution()
        print(ob.countSetBits(int(input())))
# } Driver Code Ends