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
        char N[n];
        for(char &x : N)
            cin >> x;
        sort(N, N + n);
        string a, b;
        for(int i = 0; i < n; i++)
        {
            char x = N[i];
            if(i % 2 == 0)
                a.push_back(x);
            else
                b.push_back(x );
        }
        cout << stoll(a) + stoll(b) << "\n";
    }


    return 0;
}