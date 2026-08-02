class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #BRUTE FORCE 
        # n = len(nums)
        # sorted(nums)
        # mini = min(nums)
        # return mini

        #OPTIMAL CODE 
        n = len(nums)
        low = 0
        high = n - 1 
        ans = 10 ** 10
        while(low <= high):
            mid = int((low + high) / 2)
            if(nums[low] <= nums[mid]):
                ans = min(ans, nums[low])
                low = mid + 1

            else:
                ans = min(ans, nums[mid])
                high = mid - 1
        return ans

        