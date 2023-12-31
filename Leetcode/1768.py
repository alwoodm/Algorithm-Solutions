class Solution(object):
        def mergeAlternately(self, word1, word2):
            mergedTable = []
            word1length = len(word1)
            word2length = len(word2)

            if word1length > word2length:
                looplength = word1length
            else:
                looplength = word2length

            
            for i in range (0, looplength):
                word1letter = ""
                word2letter = ""
                if i <= word1length -1:
                    word1letter = word1[i]
                if i <= word2length -1:
                    word2letter = word2[i]

                mergedTable.append(word1letter)
                mergedTable.append(word2letter)
                answer = ''.join(mergedTable[i] for i in range(0, len(mergedTable),))
            return answer