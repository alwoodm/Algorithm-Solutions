class Solution:
    def trap(self, height: list[int]) -> int:
        left, right = 0, len(height) - 1
        max_left, max_right = 0, 0
        sum = 0

        while left < right:
            if height[left] < height[right]:
                if height[left] >= max_left:
                    max_left = height[left]
                else:
                    height[left] = max_left - height[left]
                    sum += height[left]
                left += 1
            else:
                if height[right] >= max_right:
                    max_right = height[right]
                else:
                    height[right] = max_right - height[right]
                    sum += height[right]
                right -= 1

        return sum
