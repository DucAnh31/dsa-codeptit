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
        vector<int> s;
        for(int i = 1; i <= 6; i++)
        {
            int x; cin >> x;
            s.push_back(x);
        }
        vector<int> t;
        for(int i = 1; i <= 6; i++)
        {
            int x; cin >> x;
            t.push_back(x);
        }

        set<vector<int>> se; se.insert(s);
        queue<pair<vector<int>,int>> q; q.push({s, 0});
        while(!q.empty())
        {
            pair<vector<int>, int> tmp = q.front(); q.pop();
            vector<int> v = tmp.first;
            int d = tmp.second;
            if(v == t)
            {
                cout << d << "\n";
                break;
            }
            vector<int> v1 = v;
            v1[0] = v[3];
            v1[1] = v[0];
            v1[3] = v[4];
            v1[4] = v[1];

            vector<int> v2 = v;
            v2[1] = v[4];
            v2[2] = v[1];
            v2[4] = v[5];
            v2[5] = v[2];
            
            if(se.count(v1) == 0)
            {
                
                q.push({v1, d + 1});
                se.insert(v1);
            }
            if(se.count(v2) == 0)
            {
                q.push({v2, d + 1});
                se.insert(v2);
            }
        }

    }


    return 0;
}

// 0 1 2  v
// 3 4 5

// 3 0 2  v1
// 4 1 5

// 0 4 1  v2
// 3 5 2