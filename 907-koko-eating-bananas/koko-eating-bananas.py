import math;
class Solution(object):
    def MaxTime(self, piles , mid):
        total = 0
        for num in piles:
            total += (num+mid-1) // mid
        return total

    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """
        n = len(piles)
        low = 1
        high = max(piles)
        ans = -1
        while(low <= high):
            mid = (low + high) // 2
            if(self.MaxTime(piles,mid) <= h):
                ans = mid
                high = mid - 1
            else:
                low = mid+1
        return ans