#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

bool cmp(pair<char,int> p1, pair<char,int> p2)
{
    return p1.second > p2.second;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int d;
        string s;
        cin >> d >> s;
        map<char,int> mp;
        for(char c : s)
            mp[c]++;
        vector<pair<char,int>> v;
        for(pair<char,int> p : mp)
            v.push_back(p);
        int sum = 0;
        for(int i = 1; i < v.size(); i++)
        {
            sum += v[i].second;
        }        
        if((v[0].second - 1) * (d - 1) <= sum)
            cout << 1 << "\n";
        else
            cout << -1 << "\n";
        
    }

    return 0;
}