
from typing import List


class Solution:
    def search(self, n :int, k : int, arr : List[int]) -> int:
        if k not in arr:
            return -1
        else:
            return arr.index(k)+1
            
        



#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        k = int(input())
        
        
        arr=IntArray().Input(n)
        
        obj = Solution()
        res = obj.search(n, k, arr)
        
        print(res)
        

# } Driver Code Ends