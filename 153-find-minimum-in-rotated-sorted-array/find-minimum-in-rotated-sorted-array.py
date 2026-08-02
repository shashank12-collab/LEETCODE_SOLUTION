class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        sorted(nums)
        mini = min(nums)
        return mini
        