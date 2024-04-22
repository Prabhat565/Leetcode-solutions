class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Method 1: using BRute force method:
        // vector<int>ans;
        // for(int i =0;i<nums.size();i++){
        //     for(int j= i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;

        // -----------------------------------------------------------

        // METHOD 3: USING 2 FOR LOOPS:
        // vector<int>ans;
        // unordered_map<int,int>hash;
        // for(int i =0;i<nums.size();i++){
        //     hash[nums[i]]=i;
        // }
        // for(int i=0;i<nums.size();i++){
        //     int element = target - nums[i];
        //     if(hash.count(element) && hash[element]!=i){
        //         ans.push_back(i);
        //         ans.push_back(hash[element]);
        //         break;
        //     }
        // }
        // return ans;

        //  ---------------------------------------------------
        //  METHOD 2: USING unordered_map and 1 for loop:

        unordered_map<int, int> hash;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int element = target - nums[i];
            if (hash.count(element))
            {

                ans.push_back(i);
                ans.push_back(hash[element]);
            }
            hash[nums[i]] = i;
        }

        return ans;
    }
};