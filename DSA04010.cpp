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
        int a[n];
        for(int &x : a)
            cin >> x;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            sum1 += a[i];
            sum2 = max(sum2, sum1);
            if(sum1 < 0)
                sum1 = 0;
        }
        cout << sum2 << "\n";
    }


    return 0;
}