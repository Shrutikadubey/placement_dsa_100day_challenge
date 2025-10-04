/*
QUESTION:-
Given an array "ARR' containing 'N' elements, rotate this array Left by once means to shift all elements by one place to the left and move the first element to the last position in the array.

Example:
Input: 'N' 5, 'ARR' = [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]

Explanation:
We moved the 2nd element to the 1st position and 3rd element to the 2nd position and 4th element to the 3rd position and 5th element to the 4th position and move oth element to the 5th position.
*/

/*
APPROACH:-
Pehle last element store kar lo.
int last = arr[arr.size() - 1];

Array ko peeche se traverse karke har element ko ek step aage shift karo.
arr[i] = arr[i-1]

First element (arr[0]) me last store kar do.
*/

//code-
 void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        int last = arr[n - 1]; // last element store
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; // shift right
        }
        arr[0] = last; // last element ko front me daal do
    
    }

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)