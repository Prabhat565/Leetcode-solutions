<h1><a href = "https://leetcode.com/problems/3sum/description/" target="_blank">Three Sum</a><h1>
<h3>This repository contains a C++ solution to the Leetcode Three Sum problem using the optimal two-pointer approach. The Three Sum problem is a classic algorithmic problem where the goal is to find all unique triplets in an array that sum up to zero.</h3>
<h2>Problem Statement</h2>
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

  <h2>Approach: Optimal Two Pointer Approach for Three Sum Problem</h2>
  The two-pointer approach is an efficient way to solve the Three Sum problem. Here's a breakdown of the approach used in the code:
  <ul>
    <li><h3>Sorting:</h3>
    <ul>
    <li>The first step involves sorting the input array nums. Sorting the array allows us to use the two-pointer technique efficiently.</li>
    </ul>
    </li>
    <li><h3>Iterating Through the Array::</h3>
    <ul>
    <li>We iterate through the sorted array using a for loop.</li>
    <li>Inside the loop, we handle duplicates by checking if the current element is the same as the previous element. If it is, we skip to the next element to avoid duplicate triplets.</li>
    </ul>
    </li>
    <li><h3>Two Pointers:</h3>
    <ul>
    <li>For each element nums[i], we initialize two pointers, j and k, where j points to i + 1, and k points to the last element of the array.</li>
    <li>We use these two pointers to traverse the array inward to find pairs that sum up to the negation of the current element (-nums[i]).</li>
    </ul>
    </li>
    <li><h3>Finding Triplets:</h3>
    <ul>
    <li>Within the two-pointer loop, we calculate the sum of the current triplet (nums[i] + nums[j] + nums[k]).</li>
    <li>If the sum is greater than zero, we decrement k to decrease the sum.</li>
    <li>If the sum is less than zero, we increment j to increase the sum.</li>
    <li>If the sum equals zero, we found a triplet. We add this triplet to the ans vector.</li>
    <li>After finding a triplet, we handle duplicates by skipping identical elements for both j and k.</li>
    </ul>
    </li>
    <li><h3>Returning the Result:</h3>
    <ul>
    <li>Finally, we return the vector ans containing all unique triplets that sum up to zero.</li>
  </ul>

<h3>Pseudocode: </h3>

      function threeSum(nums):
    // Sort the input array
    sort(nums)

    // Initialize an empty list to store triplets
    ans = []

    // Iterate through the sorted array
    for i from 0 to length(nums) - 1:
        // Skip duplicates
        if i > 0 AND nums[i] == nums[i-1]:
            continue

        // Initialize two pointers, j and k
        j = i + 1
        k = length(nums) - 1

        // Two Pointer Technique
        while j < k:
            // Calculate the sum of current triplet
            sum = nums[i] + nums[j] + nums[k]

            // If sum is greater than zero, decrement k
            if sum > 0:
                k = k - 1
            // If sum is less than zero, increment j
            else if sum < 0:
                j = j + 1
            // If sum is zero, found a triplet
            else:
                // Add the triplet to the list
                ans.append([nums[i], nums[j], nums[k]])

                // Handle duplicates for j and k
                while j < k AND nums[j] == nums[j + 1]:
                    j = j + 1
                while j < k AND nums[k] == nums[k - 1]:
                    k = k - 1

                // Move j and k pointers
                j = j + 1
                k = k - 1

    // Return the list of triplets
    return ans

<h3>Cpp Code:</h3>

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0 ;i < nums.size();i++){

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int j = i + 1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i] + nums[j]+nums[k];
                if(sum > 0){
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++,k--;
                    while(j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                    while(j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }

            }
        }
        return ans;

\*\*(For full code , refer to the .cpp file)

<h2>Complexity Analysis</h2>
<ul>
  <h3>Time Complexity: 𝑂(nlog n) + O(n^2) where n is size of array.</h3>

 <h3>Space Complexity: O(number of triplets)</h3>

</ul>

<h2>Contributing:</h2>
Contributions to improve the efficiency or readability of the code are welcome. Feel free to submit pull requests with your enhancements.
