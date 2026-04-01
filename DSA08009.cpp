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
        int s, t; cin >> s >> t;
        set<int> se;
        se.insert(s);
        queue<pair<int,int>> q;
        q.push({s, 0});
        while(!q.empty())
        {
            pair<int,int> tmp = q.front(); q.pop();
            int num = tmp.first;
            int freq = tmp.second;
            if(num == t)
            {
                cout << freq << "\n";
                break;
            }

            if(num > 1)
            {
                if(se.count(num - 1) == 0)
                {
                    se.insert(num - 1);
                    q.push({num - 1, freq + 1});
                }
            }
            if(num < t)
            {
                if(se.count(num * 2) == 0)
                {
                    se.insert(num * 2);
                    q.push({num * 2, freq + 1});
                }
            }
        }

    }


    return 0;
}