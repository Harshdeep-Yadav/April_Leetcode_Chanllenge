
class Solution
{
public:
    void bfs(int node, vector<vector<int>> &adj, vector<bool> &vis)
    {
        queue<int> q;
        q.push(node);
        vis[node] = true;
        while (!q.empty())
        {
            node = q.front();
            q.pop();
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }
    }
    bool similar(string a, string b)
    {
        int diff = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                diff++;
            }
        }
        return diff == 0 || diff == 2;
    }
    int numSimilarGroups(vector<string> &strs)
    {
        int n = strs.size();
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (similar(strs[i], strs[j]))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int cnt = 0;
        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                bfs(i, adj, vis);
                cnt++;
            }
        }
        return cnt;
    }
};