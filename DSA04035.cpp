#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int binpow(int a, long long n)
{
    if(n == 0)
        return 1;
    int x = binpow(a, n/2);
    if(n % 2 == 0)
        return (long long)x * x % M;
    else
        return (long long)x * x % M * (a % M) % M;
}

int main()
{
    Duc_Anh

    int a; long long b;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
            return 0;
        cout << binpow(a, b) << "\n";
    }


    return 0;
}