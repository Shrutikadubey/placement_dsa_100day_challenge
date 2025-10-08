/*
QUESTION:-
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:
Input: nums = [3,3,7,7,10,11,11]
Output: 10
*/

/*
APPROACH:-
Key Idea — Binary Search

Since the array is sorted, we can use binary search instead of linear scanning.

Observation:

Pairs appear as (even index, even index + 1) before the single element.

After the single element, this pattern breaks.*/

// CODE:-
int singleNumber(vector<int> &nums)
{
    int xr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xr = nums[i] ^ xr;
    }
    return xr;
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)