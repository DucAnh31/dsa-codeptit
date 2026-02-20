#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

void bs(int a[], int n, int k)
{
    int kq = -1;
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] == k)
        {
            kq = m;
            break;
        }
        else if(a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    if(kq != -1)
        cout << kq + 1 << "\n";
    else
        cout << "NO\n";
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a)
            cin >> x;
        sort(a, a + n);
        bs(a, n, k);
    }

    return 0;
}