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

### INPUT:
```
[1,3,5,6]
5
```

### OUTPUT:
```
2
```
# Problems:
## #P1: The following code is incomplete, complete it with appropriate code & logic
```cpp
include <iostream>
 using namespace std;
void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[][] * mat2[][];
        }
    }
}
int main()
{
    int i, j;
    int res[N][N]; // To store result
    int mat1[N][N] = { { },
                       {  },
                       {  },
                       {  };
 
    int mat2[N][N] = {  },
                       { },
                       {},
                       {  } };
 
    multiply(mat1, mat2, res);
 
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
}
``` 
## Output should be
```
Result matrix is 
10 10 10 10 
20 20 20 20 
30 30 30 30 
40 40 40 40
```

## #P2: What are branches in GitHub? (Hint: Do read Docs that was provided in session)

## #P3: How you store negative number in programming (you can use c++ for implementation) and if you print always positive number what will you use rather than default condition :(internet ka use nhi lena apna concept lagana hai  plagiarism‌ check hoga)

>**NOTE:** <br> The main motive of assignment is to get yourself comfortable with *pushing the code*, but still we want to make your brain cells grind to increase your *problem solving skills*.