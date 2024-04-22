class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        set<char> res1;
        set<char> res2;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                res1.insert(word[i]);
            }
            else
            {
                res2.insert(word[i] - 'A' + 'a');
            }
        }

        int count = 0;

        for (auto i : res2)
        {
            if (res1.count(i))
            {
                count++;
            }
        }
        return count;
    }
};