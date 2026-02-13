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
        string s; cin >> s;
        int maxx = -1;
        int mp[200] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            maxx = max(maxx, mp[s[i]]);
        }
        int conti = 0;
        int sum = 0;
        for(int x : mp)
        { 
            if(x != maxx || conti == 1)
                sum += x;
            if(x == maxx)
                conti = 1;
        }
        if(sum >= maxx - 1)
            cout << 1 << "\n";
        else
            cout << -1 << "\n";
    }


    return 0;
}