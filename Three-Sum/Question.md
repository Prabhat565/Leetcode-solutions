<h1> <a href = "https://leetcode.com/problems/3sum/description/" target = "_blank">1. Three Sum</a></h1>
<h4>
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

</h4>
<h5>
Example 1:
Input: nums = [-1,0,1,2,-1,-4]
<br>
Output: [[-1,-1,2],[-1,0,1]]
<br><br>
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
<br><br>
Example 2:

Input: nums = [0,1,1] <br>
Output: []<br>
Explanation: The only possible triplet does not sum up to 0.

<br>
Example 3:

Input: nums = [0,0,0]<br>
Output: [[0,0,0]]<br>
Explanation: The only possible triplet sums up to 0.

</h5>
<p>
Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105

</p>
