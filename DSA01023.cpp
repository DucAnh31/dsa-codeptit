#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, x[20], a[20];
int stt = 0;

void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            stt++;
            int flag = 1;
            for(int i = 1; i <= k; i++)
            {
                if(x[i] != a[i])
                    flag = 0;
            }
            if(flag)
                cout << stt << "\n";
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
        for(int i = 1; i <= k; i++)
            cin >> a[i];
        Try(1);
    }


    return 0;
}