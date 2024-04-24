class Solution
{
public:
    int tribonacci(int n)
    {
        int a = 0, b = 1, c = 1;

        if (n == 0 || n == 1)
        {
            return n;
        }
        for (int i = 3; i <= n; i++)
        {
            int sum = a + b + c;
            a = b;
            b = c;
            c = sum;
        }
        return c;
    }
};