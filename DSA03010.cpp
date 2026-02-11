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
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i = 0; i < n; i++)
        {
            long long x; cin >> x;
            pq.push(x);
        }
        long long sum = 0;  
        while(pq.size() > 1)
        {
            long long x1 = pq.top(); pq.pop();
            long long x2 = pq.top(); pq.pop();
            sum += x1 + x2;
            pq.push(x1 + x2);
        }
        cout << sum << "\n";

    }

    return 0;
}