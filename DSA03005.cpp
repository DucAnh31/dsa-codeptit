#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n]; for(int &x : a) cin >> x;
        sort(a, a + n);
        int sum1a = 0, sum2a = 0;
        int sum1b = 0, sum2b = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < k)
                sum1a += a[i];
            else
                sum2a += a[i];
            if(i < n - k)
                sum2b += a[i];
            else
                sum1b += a[i];
        }
        cout << max(abs(sum2a - sum1a), abs(sum2b - sum1b)) << "\n";
    }


    return 0;
}