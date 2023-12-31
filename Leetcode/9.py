class Solution(object):
    def isPalindrome(self, x):
        palindromNumberList = [i for i in str(x)]
        if palindromNumberList == palindromNumberList[::-1]:
            return True
        else:
            return False