class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        right = 0
        window = set()
        count = 0

        for right in range(len(s)):
            while s[right] in window:
                window.discard(s[left])
                left += 1
            window.add(s[right])

            count = max(count, right - left + 1)

        return count
            
        