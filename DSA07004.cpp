#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int solve(string s)
{
    int cnt = 0;
    stack<char> st;
    for(char c : s)
    {
        if(c == '(')
            st.push(c);
        else
        {
            if(!st.empty())
                st.pop();
            else
            {
                cnt++;
                st.push('(');
            }
        }
    }
    if(!st.empty())
        cnt += st.size()/2;
    return cnt;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << solve(s) << "\n";
    }


    return 0;
}