class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        decimalA = int(a, 2)
        decimalB = int(b, 2)
        decimalAnswer = decimalA + decimalB
        binaryAnswer = bin(decimalAnswer)[2:]
        return binaryAnswer
        