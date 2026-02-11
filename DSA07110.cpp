#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check(string s)
{
    stack<char> st;
    for(char c : s)
    {
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else
        {
            if(st.empty())
                return 0;
            if((st.top() == '(' && c == ')')
            || (st.top() == '{' && c == '}')
            || (st.top() == '[' && c == ']'))
                st.pop();
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}


int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}