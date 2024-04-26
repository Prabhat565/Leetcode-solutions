<h1><a href = "https://leetcode.com/problems/two-sum/description/" target="_blank">TWO SUM</a><h1>
<h3>This repository contains a C++ solution to solve the Two Sum Problem.<br><br> We will solve this problem using 3 Methods: </h3>
<h2>Problem Statement</h2>Given an array of integers nums and an integer target, you need to find two numbers in the array such that their sum equals target. You are required to return the indices of these two numbers.
<h3>Constraints:</h3>
<ul><li>Each input will have exactly one solution.</li>
<li>You cannot use the same element twice.</li></ul>
<h2>
 Example:
</h2>
  <h3>Input:</h3>
  nums = [2, 7, 11, 15] , target = 9
<h3>Output:</h3>
  [0, 1]
<h3>Explanation:</h3>
In the given input array, nums[0] + nums[1] = 2 + 7 = 9, which matches the target.<br> Therefore, the indices of these two numbers are 0 and 1.

  <h2>Approach1 :Brute Force </h2>
  <h3>1. Brute Force:</h3>
  <ul>
    <li>Use two nested loops to iterate through all possible pairs of elements in the array..</li>
    <li>For each pair (i, j), check if the sum of the elements at indices i and j equals the target..</li>
  <li>If found, return the indices of the pair.</li>
  </ul>
   <h3>Code Explanation:</h3>
  <ul>
    <li>Step 1: Nested loops: <ul>
      <li>Use two loops to iterate through each element of the array.</li>
      <li>The outer loop iterates from 0 to nums.size() - 1.</li>
      <li>The inner loop iterates from i + 1 to nums.size() - 1.</li>
    </ul>
    </li>
    <li>Step 2: Check sum:<ul>
      <li>For each pair of elements (nums[i], nums[j]), check if their sum equals the target.</li>
      <li>If the sum matches, add the indices i and j to the result vector ans.</li>
    </ul></li>
      <li>Step 3. Return result:<ul>
      <li>After completing the loop, return the ans vector containing the indices of the pair.</li>
    </ul></li>
  </ul>

       vector<int> ans;
       for (int i = 0; i < nums.size(); i++) {
       for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans; // Return immediately after finding the pair
        }
      }
    }
    return ans;


\*\*(For full code , refer to the .cpp file)

<h2>Complexity Analysis</h2>
<ul>
  <li><h3>Time Complexity: O(n^2) </h3>
<span> -  due to the nested loops, where n is the number of elements in the array.</span></li>

  <li><h3>Space Complexity: O(1)</h3>
<span> - since we are not using any additional data structures.</span></li>
</ul>


<hr>
  <h2>Approach2: Optimal Apporoach</h2>
 <h3>1. Optimal Solution: Using an unordered maps and 2 loops(not nested):</h3>
  <ul>
    <li>The first loop initializes an unordered_map hash to store each element of the input array nums along with its index</li>
    <li>The second loop iterates through the elements of nums.</li>
  <li>For each element nums[i], it calculates the complement target - nums[i].</li>
    <li>It checks if the complement exists in the unordered_map hash and ensures that the same element is not used twice by verifying hash[element] != i.</li>
    <li>If the complement exists and it's not the same element, it adds the current index i and the index of the complement stored in the map to the result vector ans.</li>
  </ul>


<h3>Code Explanation:</h3>
  <ul>
    <li>Step 1: Initialization: <ul>
      <li>Initialize an empty vector ans to store the indices of the two numbers.</li>
      <li>Initialize an unordered_map hash to store elements of the input array nums along with their indices.</li>
    </ul>
    </li>
    <li>Step 2: Store elements in the hashmap:<ul>
      <li>Iterate through the elements of nums and insert each element along with its index into the unordered_map hash.</li>
    </ul></li>
      <li>Step 3: Check for complements:<ul>
      <li>Iterate through the elements of nums again.</li>
      <li>For each element nums[i], calculate the complement target - nums[i].</li>
<li>Check if the complement exists in the unordered_map hash and make sure it's not the same element (hash[element] != i).</li>
<li>If the complement exists and it's a different element, add the indices i and hash[element] to the result vector ans.</li>
 </ul></li>
<li>Step 4: Return the result:
<ul><li>After completing the loop, return the ans vector containing the indices of the two numbers forming the sum.</li></ul></li>

  </ul>


       vector<int> ans;
       unordered_map<int, int> hash;

      // Step 1: Store elements in the hashmap
      for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]] = i;
      }

    // Step 2: Check for complements
    for (int i = 0; i < nums.size(); i++) {
        int element = target - nums[i];
        if (hash.count(element) && hash[element] != i) {
            ans.push_back(i);
            ans.push_back(hash[element]);
            break;
        }
    }

    return ans;

\*\*(For full code , refer to the .cpp file)

<h2>Complexity Analysis</h2>
<ul>
  <li><h3>Time Complexity: 𝑂(𝑛)</h3>
<span> -  since we traverse the list containing n elements only once. </span></li>

  <li><h3>Space Complexity: 𝑂(𝑛)</h3>
<span> - due to the additional space required for the unordered_map.</span></li>
</ul>



<hr>
  <h2>Approach3: Most Optimal Apporoach: </h2>
 <h3>1. Optimal Solution:Using unordered_map and One For Loop:</h3>
  <ul>
    <li>Initialize an empty unordered_map hash to store the elements of the input array nums along with their indices.</li>
    <li>Initialize an empty vector ans to store the indices of the two numbers.</li>
  <li>Iterate through the elements of nums:</li>
    <ul><li>For each element nums[i], calculate the complement target - nums[i].</li>
    <li>Check if the complement exists in the unordered_map hash.</li>
    <li>If the complement exists, it means we have found the pair. Add the current index i and the index of the complement stored in the map to the result vector ans.</li>
    <li>Update the unordered_map hash by inserting or updating the current element nums[i] and its index i.</li></ul>
  </ul>



    unordered_map<int, int> hash;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (hash.count(complement)) {
          ans.push_back(i);
          ans.push_back(hash[complement]);
      }
      hash[nums[i]] = i;
    }

    return ans;

\*\*(For full code , refer to the .cpp file)

<h2>Complexity Analysis</h2>
<ul>
  <li><h3>Time Complexity: 𝑂(𝑛)</h3>
<span> -  since we traverse the list containing n elements only once. </span></li>

  <li><h3>Space Complexity: 𝑂(𝑛)</h3>
<span> - due to the additional space required for the unordered_map.</span></li>
</ul>




