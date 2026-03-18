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
        long long ans = 9;
        queue<long long> q;
        q.push(ans);
        while(1)
        {
            long long tmp = q.front(); q.pop();
            if(tmp % n == 0)
            {
                cout << tmp << "\n";
                break;
            }
            q.push(tmp * 10);
            q.push(tmp * 10 + 9);
        }
        
    }


    return 0;
}