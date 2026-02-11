#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n;
int x[100], mp[100];

void Try(int i)
{
    for(int j = n; j >= 1; j--)
    {
        if(mp[j] == 0)
        {
            mp[j] = 1;
            x[i] = j;
            if(i == n)
            {
                for(int k = 1; k <= n; k++)
                    cout << x[k];
                cout << " ";
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
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << "\n";
    }


    return 0;
}