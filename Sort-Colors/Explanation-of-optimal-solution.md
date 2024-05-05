<h1> <a href = "https://leetcode.com/problems/sort-colors/description/" target = "_blank">Sorting Colors Problem</a></h1>
<h2>Problem Statement</h2>
Given an array containing only 0s, 1s, and 2s, sort the array in ascending order.
<br>

<h2>Approach: Two-Pointer Approach (Dutch National Flag Algorithm)</h2>

- The two-pointer approach, also known as the Dutch National Flag algorithm, is an efficient
  algorithm for sorting an array containing 0s, 1s, and 2s in a single pass. This algorithm partitions the array into three sections:
  <br>
- 1.  0s section: Elements less than pivot (0) are placed at the beginning of the array.
- 2.  1s section: Elements equal to pivot (1) are left untouched, as they are already sorted.
- 3.  2s section: Elements greater than pivot (2) are placed at the end of the array.

 <h2> Algorithm Steps:</h2>

- 1.  Initialize three pointers:
- - `start`: Points to the next position where 0 should go.
- - `end`: Points to the next position where 2 should go.
- - `i`: Scans the array from left to right.
    <br><br>
- 2.  Iterate through the array using the `i` pointer:
- - If `nums[i]` is 0, swap `nums[i]` with `nums[start]`, increment `start` and `i`.
- - If `nums[i]` is 1, move `i` forward.
- - If `nums[i]` is 2, swap `nums[i]` with `nums[end]`, decrement `end`, but don't increment `i`.
    <br><br>

- This algorithm effectively partitions the array into three sections, sorting it in place.

        int start = 0;
        int end = nums.size()-1;
        int i =0;
        while(i <= end){
          if(nums[i]==0)
          {
             swap(nums[i],nums[start]);
             start++;
             i++;
           }

          else if(nums[i]==1)
          {
             i++;
          }
         else if(nums[i]==2)
         {
            swap(nums[i],nums[end]);
            end--;
         }
        }

**_(For Complete code refer to <a href= "https://github.com/Prabhat565/leetcode-solutions/blob/master/Sort-Colors/Optimal-solution.cpp" target = "_blank">
Optimal-solution.cpp file)</a>_**

 <h2>Complexity Analysis:</h2>

- <strong>Time Complexity:</strong>
  It runs in linear time <strong>O(n)</strong>, where n is the size of the array, making it highly efficient.
- <strong>Space Complexity:</strong>The space complexity of the algorithm is <strong> O(1) </strong>, as it uses only a constant amount of extra space for storing a few variables (pointers).

**_(This approach is particularly useful when sorting large arrays or when extra space is limited.)_**
