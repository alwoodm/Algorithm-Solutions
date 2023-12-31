class Solution(object):
    def moveZeroes(self, nums):
        howManyZeroes = 0
        for i in range (len(nums)):
            if 0 in nums:
                nums.remove(0)
                howManyZeroes += 1

        for i in range (howManyZeroes):
            nums.append(0)
        return nums
    