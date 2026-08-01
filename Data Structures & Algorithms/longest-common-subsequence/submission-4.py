class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        # we need to create an array L[][] that will track the count
        # at each indece, look at text1[i] and text2[j]
        # should we 1-index so that we have the 0 buffers?

        #also, does the smaller one always need to be the rows?
        #no, it can be either way

        rows = len(text1)
        cols = len(text2)

        #list comprehension way to populate a list
        L = [[0 for c in range(cols + 1)] for r in range(rows + 1)]

        for r in range(1, rows + 1):
            for c in range(1, cols + 1):
                #as we step through each char, we ask
                if(text1[r - 1] == text2[c - 1]):
                    L[r][c] = L[r-1][c-1] + 1
                else:
                    L[r][c] = max(L[r-1][c], L[r][c-1])
        print(L)


        return L[rows][cols]