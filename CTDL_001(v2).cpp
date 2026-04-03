#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    int n; cin >> n;
    queue<string> q;
    q.push("0");
    q.push("1");

    while(!q.empty())
    {
        string tmp = q.front(); q.pop();
        if(tmp.size() == n)
            cout << tmp << "\n";
        if(tmp.size() > n)
            return 0;
        

        q.push(tmp + "0");
        q.push(tmp + "1");
    }


    return 0;
}