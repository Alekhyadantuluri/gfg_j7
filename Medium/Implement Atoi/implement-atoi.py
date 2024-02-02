#User function template for Python

class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self,s):
        c = 0
        for i in range(len(s)):
            if i!=0 and s[i]=="-":
                return -1
            elif ord(s[i])>=48 and ord(s[i])<=57:
                c= c*10+(ord(s[i])-48)
            elif s[i].isalpha():
                return -1
        if s[0]=="-":
            return -1*c
        return c
                
                
                
                
        


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        string = input().strip();
        ob=Solution()
        print(ob.atoi(string))
# } Driver Code Ends