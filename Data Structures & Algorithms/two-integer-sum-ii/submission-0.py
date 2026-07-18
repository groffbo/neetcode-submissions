class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        ret = []
        front = 0
        back = len(numbers) - 1

        while front < back:
            candidate = numbers[front] + numbers[back]
            if candidate == target:
                ret.append(front+1)
                ret.append(back+1)
                return ret

            #do we need to decrease or increase?
            elif candidate > target:
                back -= 1
            # candidate is too small, increase front
            else:
                front += 1
        
        return ret