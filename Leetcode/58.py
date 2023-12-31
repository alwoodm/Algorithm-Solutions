class Solution(object):
    def lengthOfLastWord(self, s):
        splitedWords = s.split()
        answer = len(splitedWords[-1])
        return answer
        