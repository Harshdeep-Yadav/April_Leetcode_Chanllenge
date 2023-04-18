class Solution
{
public:
    string mergeAlternately(string w1, string w2)
    {
        int n = w1.size();
        int m = w2.size();
        string utt;
        int i = 0, j = 0;
        while (i < n || j < m)
        {
            if (i < n)
            {
                utt += w1[i++];
            }
            if (j < m)
            {
                utt += w2[j++];
            }
        }
        return utt;
    }
};