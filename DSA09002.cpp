#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh
    
    int n; cin >> n;
    cin.ignore(1);
    set<pair<int,int>> canh;
    for(int i = 1; i <= n; i++)
    {   
        string s; getline(cin, s);
        stringstream ss(s);
        string w;
        while(ss >> w)
        {
            int x = stoi(w);
            canh.insert({min(i, x), max(i, x)});
        }
    }
    
    for(pair<int,int> p : canh)
    {
        cout << p.first << " " << p.second << "\n";
    }


    return 0;
}