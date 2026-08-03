class Solution(object):

    def SumOfElem(self, nums , d):
        total = 0
        for num in nums:
            total += (num + d - 1) // d
        return total

    def smallestDivisor(self, nums, threshold):
        """
        :type nums: List[int]
        :type threshold: int
        :rtype: int
        """
        n = len(nums)
        low = 1 
        high = max(nums)
        ans = -1
        while(low <= high):
            mid = (low+high) // 2
            if(self.SumOfElem(nums , mid) <= threshold):
                ans = mid
                high = mid - 1
            else:
                low = mid+1

        return ans
            

        