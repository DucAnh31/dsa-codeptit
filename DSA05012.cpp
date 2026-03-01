#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int c[1001][1001];

int main()
{
    Duc_Anh
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            if(i == j)
                c[i][j] = 1;
            if(j == 0)
                c[i][j] = 1;
        }
    }
    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            c[i][j] %= M;
        }
    }
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        cout << c[n][k] << "\n";
    }


    return 0;
}