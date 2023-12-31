class Solution(object):
    def isPalindrome(self, s):
        filteredText = ''.join(i for i in s if i.isalnum()).lower()
        if filteredText == filteredText[::-1]:
            return True
        else:
            return False