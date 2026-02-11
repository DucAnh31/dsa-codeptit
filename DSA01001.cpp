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
        int i = s.size() - 1;
        while(i >= 0 && s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        if(i != -1)
            s[i] = '1';
        cout << s << "\n";

    }

    return 0;
}