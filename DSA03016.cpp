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
        int s, d; cin >> s >> d;
        vector<int> ans;
        int ok = 1;
        for(int i = d; i >= 1; i--)
        {
            if(s == 0)
            {
                ok = 0;
                break;
            }
            if(s >= 10)
            {
                if(i == 1)
                {
                    ok = 0;
                    break;
                }
                s -= 9;
                ans.push_back(9);
            }
            else
            {
                if(i == 1)
                    ans.push_back(s);
                else if(s == 1)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(s - 1);
                    s = 1;
                }
            }
        }
        if(ok == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        reverse(ans.begin(), ans.end());
        for(int x : ans)
            cout << x;
        cout << "\n";
    }


    return 0;
}