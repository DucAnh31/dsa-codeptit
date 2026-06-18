#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int uutien(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
    return 0;
}

void trungto_hauto(string s)
{
    string res = "";
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(isalpha(c))
            res += c;
        else if(c == '(')
            st.push(c);
        else if(c == ')')
        {
            while(st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && uutien(st.top()) >= uutien(c))
            {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << "\n";
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        trungto_hauto(s);
    }


    return 0;
}