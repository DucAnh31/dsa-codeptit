#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    int n; cin >> n;
    vector<int> ke[n + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int x; cin >> x;
            if(x == 1)
            {
                ke[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int v : ke[i])
            cout << v << " ";
        cout << "\n";
    }


    return 0;
}