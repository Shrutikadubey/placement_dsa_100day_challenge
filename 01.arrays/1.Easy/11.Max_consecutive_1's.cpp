/*Max Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the array.
Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:
 Input: nums = [1,0,1,1,0,1]
Output: 2
*/

//approach
// Use two variables:
// count → current streak of 1’s.
// maxCount → longest streak so far.
// Traverse the array:
// If nums[i] == 1, increment count.
// If nums[i] == 0, reset count = 0.
// After each step, update maxCount = max(maxCount, count).
// Return maxCount.


//code
int count = 0, maxCount = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0; // reset when 0 found
            }
        }
        return maxCount;
    }
};

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)