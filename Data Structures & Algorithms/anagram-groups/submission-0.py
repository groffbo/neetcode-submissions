import numpy as np

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # we make a hash map to store the 'keys' for the anagram words
        # each key is the array of frequency count

        # lets start by just creating the count array

        # need to go through and add the hash sublists to the final ret

        sublists = {}
        ret = []

        for s in strs:
            #for each character, we want to build the count
            count = np.zeros(26, dtype=int)
            for c in s:
                count[ord(c) - 97] += 1
            res = tuple(count)
            if res in sublists:
                sublists[res].append(s)
            else:
                sublists[res] = []
                sublists[res].append(s)
        
        ret = list(sublists.values())

        return ret