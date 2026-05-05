#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, cnt;
int x[100];

bool check(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            cnt++;
            if(check(cnt))
            {
                cout << cnt << ": ";
                for(int m = 1; m <= k; m++)
                {
                    cout << x[m] << " ";
                }
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
    cin >> n >> k;
    Try(1);


    return 0;
}