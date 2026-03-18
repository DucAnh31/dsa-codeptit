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
        int cnt = 0;
        string s = "1";
        queue<string> q;
        q.push(s);
        while(1)
        {
            string tmp = q.front(); q.pop();
            cout << tmp << " ";
            cnt++;
            if(cnt == n)
                break;
            q.push(tmp + "0");
            q.push(tmp + "1");
        }
        cout << "\n";
    }


    return 0;
}