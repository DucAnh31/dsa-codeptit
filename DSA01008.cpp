#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k;
int x[100];

bool check()
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(x[i] == 1)
            cnt++;
    return cnt == k;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            if(check())
            {
                for(int k = 1; k <= n; k++)
                    cout << x[k];
                cout << "\n";
            }
        }
        else
            Try(i + 1);
    }
}


int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
    }

    return 0;
}