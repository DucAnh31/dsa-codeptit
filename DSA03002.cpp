#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int maxx(string s)
{
    for(char &c : s)
        if(c == '5')
            c = '6';
    return stoi(s);
}
int minn(string s)
{
    for(char &c : s)
        if(c == '6')
            c = '5';
    return stoi(s);
}

int main()
{
    Duc_Anh
    string a, b; cin >> a >> b;
    cout << minn(a) + minn(b) << " " << maxx(a) + maxx(b);
    return 0;
}