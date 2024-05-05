<h1> <a href = "https://leetcode.com/problems/sort-colors/description/" target = "_blank">Sorting Colors Problem</a></h1>
<h2>Problem Statement</h2>
Given an array containing only 0s, 1s, and 2s, sort the array in ascending order.

<h2>Approach: Counting Method</h2>
The counting method is a straightforward approach to solve the sorting colors problem. Here's how it works:
<ol>
<li>
<strong>Count Occurrences:</strong> Iterate through the array and count the occurrences of 0s, 1s, and 2s.</li>
<li>
<strong>Overwrite Array:</strong>  Overwrite the original array based on the counts obtained. Set the first count0 elements to 0, the next count1 elements to 1, and the remaining elements to 2.</li>

</ol>

    // Step 1: Count the occurrences of 0s, 1s, and 2s

        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count0++;
            } else if (nums[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }


    // Step 2: Overwrite the original array based on the counts
    // Set the first count0 elements to 0, next count1 elements to 1,
       and remaining count2 elements to 2


        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i < (count0 + count1); i++) {
            nums[i] = 1;
        }
        for (int i = (count0 + count1); i < (count0 + count1 + count2); i++) {
            nums[i] = 2;
        }

**_NOTE: (For Complete Code refer to <a href= "https://github.com/Prabhat565/leetcode-solutions/blob/master/Sort-Colors/Brute-force-solution.cpp" target = "_blank">
Brute-force-solution.cpp file)</a>_**

<h2>Complexity Analysis:</h2>
<ul>
<li><strong>Time Complexity:</strong>
O(n), where n is the size of the input array.</li>
<li><strong>Space Complexity:</strong>
O(1), as we use a constant amount of extra space for counting variables.</li>
</ul>

<h2>Conclusion: </h2>
While the counting method is intuitive and easy to implement, it requires two passes through the array, making it less efficient compared to other approaches like the Dutch National Flag algorithm
(Two Pointer Approach). However, for small input sizes or when simplicity is preferred over efficiency, this method can be a viable choice.

<hr>

**_(Refer to <a href= "https://github.com/Prabhat565/leetcode-solutions/blob/master/Sort-Colors/Optimal-solution.cpp" target = "_blank">
Explanation-of-optimal-solution.md file</a> for optimal Solution approach)_**
