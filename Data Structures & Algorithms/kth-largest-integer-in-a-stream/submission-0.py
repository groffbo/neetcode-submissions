import heapq

class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        self.nums = []
        self.k = k
        for n in nums:
            self.check(n)


    def add(self, val: int) -> int:
        self.check(val)
        
        return self.nums[0]

    def check(self, val):
        if len(self.nums) < self.k:
            heapq.heappush(self.nums, val)

        elif val > self.nums[0]:
            heapq.heappop(self.nums)
            heapq.heappush(self.nums, val)