#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int binpow(int n, int k)
{
    if(k == 0)
        return 1;
    int x = binpow(n, k/2);
    if(k % 2 == 0)
        return ((long long)x * x) % M;
    else
        return ((long long)x * x) % M * n % M;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        cout << binpow(n, k) << "\n";
    }


    return 0;
}