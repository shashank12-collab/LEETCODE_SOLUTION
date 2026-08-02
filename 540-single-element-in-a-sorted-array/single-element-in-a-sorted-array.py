class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mp = {}
        for x in nums:
            mp[x] = mp.get(x,0) + 1
        
        for key , value in mp.items():
            if(value == 1):
                return key
        