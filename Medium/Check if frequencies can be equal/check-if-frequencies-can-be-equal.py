#User function Template for python3
class Solution:
    def sameFreq(self, s):
        # code here
        d={}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        li=list(d.values())
        m=max(d.values())
        m1=min(d.values())
        a=list(set(li))
        if len(a)==1:
            return 1
        elif li.count(m)==1 and len(a)==2 and abs(a[0]-a[1])==1:
            return 1
        elif m1 == 1 and len(a)==2:
            return 1
        return 0
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
	T=int(input())

	for _ in range(T):
		s = input()
		ob = Solution()
		answer = ob.sameFreq(s)
		if answer:
			print(1)
		else:
			print(0)

# } Driver Code Ends