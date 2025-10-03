/*
QUESTION:-
Given an array A[] of size n. The task is to find the largest element in it.

Example:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90
*/

// link-- https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

/*
APPROACH:-
-> Intialize the ans with starting element
-> Traverse the entire array and update the ans if the element is greater then ans
-> Finally, return the ans
*/

// CODE:-

int largest(vector<int> &arr) {
        // code here
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
            }
            
        }
        return ans;
    }
    
// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)