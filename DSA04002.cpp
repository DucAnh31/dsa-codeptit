#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int binpow(long long a, long long n)
{
    if(n == 0)
        return 1;
    int x = binpow(a, n/2);
    if(n % 2 == 0)
        return (long long)x * x % M;
    else
        return (long long)x * x % M * (a) % M;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string n; cin >> n;
        n = to_string(stoll(n));
        string rn = n;
        reverse(rn.begin(), rn.end());
        cout << binpow(stoll(n), stoll(rn)) << "\n";
    }


    return 0;
}