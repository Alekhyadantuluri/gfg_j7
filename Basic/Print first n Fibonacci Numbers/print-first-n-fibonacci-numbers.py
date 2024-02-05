#User function Template for python3

class Solution:
    #Function to return list containing first n fibonacci numbers.
    def printFibb(self,n):
        # your code here
        if n==1:
            return [1]
        elif n==2:
            return [1,1]
        l=[]
        a = 1
        b = 1
        c = a+b
        l.append(a)
        l.append(b)
        while(n-2 > 0):
            l.append(c)
            a=b
            b=c
            c=a+b
            n-=1
        return l
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__': 
    t=int(input())
    for tcs in range(t):
        
        n=int(input())
        res = Solution().printFibb(n)
        for i in range (len(res)):
            print (res[i], end = " ") 
        print()
# } Driver Code Ends