#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k;
int a[100], x[100];
vector<vector<int>> ans;
void check()
{
    int sum = 0;
    vector<int> tmp;
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 1)
        {
            sum += a[i];
            tmp.push_back(a[i]);
        }
    }
    if(sum == k)
        ans.push_back(tmp);
}
void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
            check();
        else
            Try(i + 1);
    }

}

int main()
{
    Duc_Anh
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    cout << ans.size();
    return 0;
}