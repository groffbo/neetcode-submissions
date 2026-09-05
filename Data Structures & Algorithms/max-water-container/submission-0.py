class Solution:
    def maxArea(self, heights: List[int]) -> int:
        #the area will be the min(left, right) * (right - left)
        # we only update the max area whenever we find a new max area
        #yea only move the pointer with the smaller current height
        left = 0
        right = len(heights) - 1
        max_area = 0

        while (left < right):
            area = min(heights[left], heights[right]) * (right - left)
            max_area = max(area, max_area)

            if heights[left] < heights[right]:
                left += 1

            else:
                right -= 1

        return max_area