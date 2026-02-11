#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, cnt;
int mp[100], x[100];

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(mp[j] == 0)
        {
            mp[j] = 1;
            x[i] = j;
            if(i == n)
            {
                cnt++;
                cout << cnt << ": ";
                for(int k = 1; k <= n; k++)
                    cout << x[k] << " ";
                cout << "\n";
            }
            else
                Try(i + 1);
            mp[j] = 0;
        }
    }
}

int main()
{
    Duc_Anh
    cin >> n;
    Try(1);


    return 0;
}