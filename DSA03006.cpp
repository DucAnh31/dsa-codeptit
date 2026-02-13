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
        int a[n], b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        bool ok = true;
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            if(b[i] != a[i] && b[i] != a[n - i - 1])
                ok = false;
        }
        if(ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }


    return 0;
}