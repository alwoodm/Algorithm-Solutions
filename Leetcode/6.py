class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows < 2:
            return s

        s_len = len(s)
        cycle = 2 * numRows - 2
        out = []

        for row in range(numRows):
            i = row
            while i < s_len:
                out.append(s[i])

                diag = cycle - 2 * row
                if diag != cycle and diag != 0 and i + diag < s_len:
                    out.append(s[i + diag])

                i += cycle

        return "".join(out)
