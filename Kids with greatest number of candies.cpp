class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &c, int ext)
    {
        int n = c.size();
        vector<bool> res(n);
        int maxi = *max_element(c.begin(), c.end());
        for (int i = 0; i < n; i++)
        {
            if (c[i] + ext >= maxi)
            {
                res[i] = true;
            }
            else
            {
                res[i] = false;
            }
        }
        return res;
    }
};