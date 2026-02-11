#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int a[100], s, n;
int ans;

void Try(int i, int pos, int sum)
{   
    if(i > n)
        return;
    for(int j = pos; j <= n; j++)
    {    
        sum += a[j];
        if(sum == s)
        {
            ans = min(ans, i);
            return;
        }
        else if(sum < s)
            Try(i + 1, j + 1, sum);
        sum -= a[j];  
    }
}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        ans = 2e9;
        cin >> n >> s;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        Try(1, 1, 0);
        if(ans != 2e9)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}