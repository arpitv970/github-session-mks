# Assignment
## Here are few problems for that you have to write a program
## Rules:
- Do not copy/paste the solution directly from internet
- Explain the approch of solving the problem
- Create a directory of your name & in there provide solution in seperate files

# Illustration:
## Sample Problem:
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

### Test Case 1:
```
Input: nums = [1,3,5,6], target = 5
Output: 2
```
### Constraints:
- 1 <= nums.length <= 10^4
- -10^4 <= nums[i] <= 10^4
- nums contains distinct values sorted in ascending order.
- -10^4 <= target <= 10^4

## Sample Solution:
### Code:
```py
'''
Approach #1
- iterate `nums`, if element is target then return its index, else if element exceeds target then return its index
- O(n)

Approach #2
- Use Binary Sorting Algorithim
- O(log N)
'''

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        # using binary sort algo
        lo = 0    # starting point
        hi = len(nums) - 1    # ending point
                
        while (lo <= hi):
            
            mid = (lo + hi) // 2    # accessing the mid value
            
            if (nums[mid] == target):
                return mid
            elif (nums[mid] > target):
                hi = mid - 1
            else:
                lo = mid + 1
        
        # if all elements are smaller than target value
        return hi + 1
```

# Problems:
uploading problems soon...


>**NOTE:** <br> The main motive of assignment is to get yourself comfortable with *pushing the code*, but still we want to make your brain cells grind to increase your *problem solving skills*.