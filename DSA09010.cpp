#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int low[1005], dis[1005], visited[1005], in_stack[1005];
int n, m, timer, scc;
vector<int> ke[1005];
stack<int> st;

void nhap()
{
    cin >> n >> m;
    for(int i = 0; i < 1005; i++)
    {
        low[i] = 0;
        dis[i] = 0;
        visited[i] = 0;
        in_stack[i] = 0;
        ke[i].clear();
    }
    timer = 0, scc = 0;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}
void dfs(int u)
{
    timer++;
    low[u] = dis[u] = timer;
    visited[u] = 1;
    st.push(u);
    in_stack[u] = 1;

    for(int v : ke[u])
    {
        if(visited[v] == 0)
        {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else
            low[u] = min(low[u], dis[v]);
    }

    if(low[u] == dis[u])
    {
        scc++;
        while(st.top() != u)
        {
            st.pop();
            in_stack[u] = 0;
        }
        st.pop();
        in_stack[u] = 0;
    }

    
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
                dfs(i);
        }
        if(scc == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}