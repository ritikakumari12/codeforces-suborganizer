#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> g[1000007];
vector<int> v(1000007);
int timer = 0, b = 0;
int in[100007];
int low[100007];
vector<pair<int, int>> forw;

void dfs(int node, int par)
{
    v[node] = 1;
    in[node] = timer;
    low[node] = timer;
    timer++;
    for (int child : g[node])
    {
        if (child == par)
            continue;
        if (v[child] == 1)
        {
            low[node] = min(low[node], in[child]);
            if (in[node] > in[child])
                forw.push_back({node, child});
        }
        else
        {
            dfs(child, node);
            if (low[child] > in[node])
            {
                b++;
                return;
            }
            low[node] = min(low[node], low[child]);
            forw.push_back({node, child});
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
        v[i] = 0;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    b = 0;
    dfs(1, 0);
    if (b != 0)
        cout << "0 \n";
    else
    {
        //cout << "here\n";
        for (int i = 0; i < forw.size(); i++)
        {
            cout << forw[i].first << " " << forw[i].second << "\n";
        }
    }
    return 0;
}