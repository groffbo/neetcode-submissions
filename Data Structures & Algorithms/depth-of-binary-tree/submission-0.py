# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        #brute force would be to iterate every possible path and return the longest path

        #optimized solution is depth-first search

        #base case for recursion
        if root == None:
            return 0

        #count is tracked inside of the return
        return (1 + max(self.maxDepth(root.right), self.maxDepth(root.left)))
