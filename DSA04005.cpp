#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

long long fib[100];

char dequy(int n, long long k)
{
    if(n == 1)
        return 'A';
    if(n == 2)
        return 'B';
    
    if(k <= fib[n - 2])
        return dequy(n - 2, k);
    else
        return dequy(n - 1, k - fib[n - 2]);
}

int main()
{
    Duc_Anh

    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 92; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int t; cin >> t;
    while(t--)
    {
        int n; long long k; cin >> n >> k;
        cout << dequy(n, k) << "\n";
    }



    return 0;
}