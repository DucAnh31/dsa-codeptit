#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, x[20];
int stt = 0;

void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int m = 1; m <= k; m++)
                cout << (char)(x[m] + 'A' - 1);
            cout << "\n";
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
        stt = 0;
        cin >> n >> k;
        Try(1);
    }


    return 0;
}