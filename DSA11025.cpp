#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int l, int r, vector<int> v)
{
    if(r < l)
        return;
    int index = (r + l)/2;
    cout << v[index] << " ";
    solve(l, index - 1, v);
    solve(index + 1, r, v);
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        solve(0, v.size() - 1, v);
        cout << "\n";
    }

    return 0;
}