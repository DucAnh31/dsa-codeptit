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
        int k; cin >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(char c : s)
            mp[c]++;
        priority_queue<int> pq;
        for(pair<char, int> p : mp)
            pq.push(p.second);
        while(k && !pq.empty())
        {   
            int tmp = pq.top(); pq.pop();
            tmp--;
            pq.push(tmp);
            k--;
        }
        long long ans = 0;
        while(!pq.empty())
        {
            
            ans += (long long)pq.top() * pq.top();
            pq.pop();
        }
        
        cout << ans << "\n";
    }


    return 0;
}