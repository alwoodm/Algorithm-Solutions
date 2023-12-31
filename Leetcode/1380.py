class Solution(object):
    def luckyNumbers(self, matrix):
        lucky_numbers = []
        
        for i in range(len(matrix)):
            min_element = min(matrix[i])
            min_col_index = matrix[i].index(min_element)
            is_lucky = all(min_element >= matrix[j][min_col_index] for j in range(len(matrix)))
            if is_lucky:
                lucky_numbers.append(min_element)
        return lucky_numbers