from collections import Counter, defaultdict


class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)
        freq = defaultdict(list)
        for num, c in count.items():
            freq[c].append(num)
        result = []
        for c in range(len(nums), 0, -1):
            if c in freq:
                result.extend(freq[c])
            if len(result) >= k:
                break
        return result[:k]
