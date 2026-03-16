#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int n, k, max_denta;
string s;
char x[1000];
int ans;

bool cnt_deg()
{
    max_denta = -1;
    int denta = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == '(')
            denta++;
        else
            denta--;
        max_denta = max(max_denta, denta);
        if(denta < 0)
            return false;
    }
    return denta == 0;
}

void Try(int i)
{
    if(i > n)
    {
        if(cnt_deg() && max_denta == k)
            ans++;
        return;
    }
    if(s[i] == '?')
    {
        for(int j = '('; j <= ')'; j++)
        {
            x[i] = j;
            Try(i + 1);
        }
    }
    else
    {
        x[i] = s[i];
        Try(i + 1);
    }
    
}

int main()
{
    Duc_Anh

    cin >> k >>s;
    n = s.size();
    s = " " + s;
    Try(1);
    cout << ans;

    return 0;
}