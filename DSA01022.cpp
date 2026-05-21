#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, x[20], visited[20], a[20];
int stt = 0;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(visited[j] == 0)
        {
            visited[j] = 1;
                x[i] = j;
            if(i == n)
            {
                stt++;
                int flag = 1;
                for(int i = 1; i <= n; i++)
                {
                    if(x[i] != a[i])
                        flag = 0;
                }
                if(flag)
                    cout << stt << "\n";
            }
            else
                Try(i + 1);
            visited[j] = 0;
        }
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        stt = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        Try(1);
    }


    return 0;
}