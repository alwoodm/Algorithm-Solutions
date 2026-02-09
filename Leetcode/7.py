class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = 2**31 - 1  # 2147483647
        INT_MIN = -2**31      # -2147483648

        x_str = str(x)

        have_minus: bool = '-' in x_str

        if have_minus:
            x_str = x_str[1:]

        x_str = x_str[::-1]

        x = int(x_str)

        if have_minus:
            x = x * -1

        if x < INT_MIN or x > INT_MAX:
            return 0

        return x
