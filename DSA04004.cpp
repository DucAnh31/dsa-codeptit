#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

long long luythua(int n)
{
    long long ans = 1;
    for(int i = 1; i <= n; i++)
        ans *= 2;
    return ans;
}

int find(int n, long long k)
{
    long long pos = luythua(n - 1);
    if(k == pos)
        return n;
    
    if(k < pos)
        return find(n - 1, k);
    else    
        return find(n -1, k - pos);
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n; long long k; cin >> n >> k;
        cout << find(n, k) << "\n";
    }
   

    return 0;
}

