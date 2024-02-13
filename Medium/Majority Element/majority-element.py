#User function template for Python 3

class Solution:
    def majorityElement(self, A, N):
        c = -1
        v = 0
        for i in range(N):
            if v == 0:
                c = A[i]
                v+=1
            else:
                if c==A[i]:
                    v+=1
                else:
                    v-=1
        c1 = 0
        for i in range(N):
            if A[i]==c:
                c1+=1
        if c1 > N//2:
            return c
        else:
            return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

from sys import stdin


def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=[int(x) for x in input().strip().split()]
            
            
            obj = Solution()
            print(obj.majorityElement(A,N))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends