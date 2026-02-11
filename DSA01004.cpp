#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k;
int x[100];

void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int c = 1; c <= k; c++)
                cout << x[c];
            cout << " ";
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
        cout << "\n";
    }



    return 0;
}