class Solution:
    def search(self, nums: List[int], target: int) -> int:
        #binary search is just splitting in half each time until you find the number
        # so we will go to the middle index (get length)
        left = 0
        right = len(nums) - 1
        mid = int(len(nums) / 2)
        
        while(left <= right):
            mid = (left + right) // 2
            if(nums[mid] > target):
                right = mid - 1
            elif(nums[mid] < target):
                left = mid + 1
            else:
                return mid

        return -1