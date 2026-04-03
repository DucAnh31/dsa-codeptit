#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh
    
    
    int n; cin >> n;
    int a[n + 1][n + 1];
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            a[i][j] = 0;
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
            a[i][x] = 1;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }


    return 0;
}