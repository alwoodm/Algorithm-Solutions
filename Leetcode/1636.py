from collections import Counter
class Solution(object):
    def frequencySort(self, nums):
        CounteredNumbers = Counter(nums)
        nums.sort(key = lambda x: (CounteredNumbers[x], -x))
        return nums        