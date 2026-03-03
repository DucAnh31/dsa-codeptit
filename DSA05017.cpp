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
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        
        int dp_left[n + 1] = {0}, dp_right[n + 1] = {0};
        for(int i = 1; i <= n; i++)
        {
            dp_left[i] = a[i];
            for(int j = 1; j < i; j++)
            {
                if(a[j] < a[i])
                {
                    dp_left[i] = max(dp_left[i], dp_left[j] + a[i]);
                }
            }
        }

        for(int i = n; i >= 1; i--)
        {
            dp_right[i] = a[i];
            for(int j = n; j > i; j--)
            {
                if(a[j] < a[i])
                {
                    dp_right[i] = max(dp_right[i], dp_right[j] + a[i]);
                }
            }
        }

        int ans = -1;
        for(int i = 1; i <= n; i++)
        {
            ans = max(ans, dp_left[i] + dp_right[i] - a[i]);
        }
        cout << ans << "\n";
        

    }


    return 0;
}