class Solution(object):
    def plusOne(self, digits):
        answer = int("".join(map(str, digits))) + 1
        digits = [int(digit) for digit in str(answer)]
        return digits