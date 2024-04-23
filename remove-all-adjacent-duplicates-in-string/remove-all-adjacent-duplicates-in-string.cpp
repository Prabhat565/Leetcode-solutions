class Solution
{
public:
    string removeDuplicates(string s)
    {

        // Approach: 1. Loop through the string s

        //           2. Using a string ans to store the result

        //           3. Check if ans is empty: If ans is empty, it means there are no characters yet. In this case, the current character from s is directly added to ans using push_back().

        //           4.  Check for adjacent duplicates: If ans is not empty, the code checks whether the last character of ans (accessed via ans[ans.size() - 1]) is equal to the current character from s. If they are the same, it means there's an adjacent duplicate. In such a case, the last character is removed from ans using pop_back().

        //            5. Add non-duplicate characters to ans: If the current character from s is not a duplicate, i.e., it's different from the last character in ans, it's appended to ans using push_back().

        //            6.Return the modified string ans: Once all characters in s have been processed, the modified string ans, which contains s with adjacent duplicates removed, is returned.

        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (ans.empty())
            {
                ans.push_back(s[i]);
            }
            else if (ans[ans.size() - 1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};