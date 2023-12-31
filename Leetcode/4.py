class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1.extend(nums2)
        nums1.sort()
        median = (float(nums1[len(nums1) // 2] + nums1[(len(nums1) // 2) - 1]) / 2) if len(nums1) % 2 == 0 else nums1[len(nums1) // 2]
        return median
