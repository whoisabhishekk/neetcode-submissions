class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res2=[]
        for i in range(len(nums)):
            res=target-nums[i]
            if res in nums and nums.index(res)!=i:
                res2.append(i)
                res2.append(nums.index(res))
                break
        return sorted(res2)        
