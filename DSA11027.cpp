#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);
int cnt = 0;
void solve(int l, int r, vector<int> v)
{
    if(r < l)
        return;
    int index = (r + l)/2;
    solve(l, index - 1, v);
    solve(index + 1, r, v);
    if(l == r)
        cnt++;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        cnt = 0;
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        solve(0, v.size() - 1, v);
        cout << cnt << "\n";
    }

    return 0;
}