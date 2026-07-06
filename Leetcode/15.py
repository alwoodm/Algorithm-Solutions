class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        results = []
        nums.sort()
        n_size = len(nums) - 1
        for i in range(n_size):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            j = i + 1
            k = n_size
            while j < k:
                total = nums[i] + nums[j] + nums[k]
                if total < 0:
                    j += 1
                elif total > 0:
                    k -= 1
                else:
                    results.append([nums[i], nums[j], nums[k]])
                    while j < k and nums[j] == nums[j + 1]:
                        j += 1
                    while j < k and nums[k] == nums[k - 1]:
                        k -= 1
                    j += 1
                    k -= 1

        return results
