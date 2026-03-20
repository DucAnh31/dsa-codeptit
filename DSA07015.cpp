#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);
int uutien(string c)
{
    if(c == "+" || c == "-")
        return 1;
    else if(c == "*" || c == "/")
        return 2;
    return 0;
}
vector<string> trungto_to_hauto(vector<string> v)
{
    stack<string> st;
    vector<string> ans;

    for(string s : v)
    {
        //cout << s << "\n";
        if(s == "(")
            st.push(s);
        else if(s == ")")
        {
            while(st.top() != "(")
            {
                ans.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else if(s == "+" || s == "-" || s == "*" || s == "/")
        {
            while(!st.empty() && uutien(s) <= uutien(st.top()))
            {
                ans.push_back(st.top());
                st.pop();   
            }
            st.push(s);
        }
        else
            ans.push_back(s);
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
long long cal(vector<string> ans)
{
    
    stack<long long> st;
    for(string s : ans)
    {
        if(s == "+" || s == "-" || s == "*" || s == "/")
        {
            long long x = st.top(); st.pop();
            long long y = st.top(); st.pop();
            if(s == "+")    
                st.push(x + y);
            else if(s == "-")
                st.push(y - x);
            else if(s == "*")
                st.push(x * y);
            else
                st.push(y / x);
        }
        else
            st.push(stoll(s));
    }
    return st.top();
}
int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        vector<string> v;
        
        int i = 0;
        while(i < s.size())
        {
            string tmp = "";
            while(s[i] >= '0' && s[i] <= '9'&& i < s.size())
            {
                tmp += s[i];
                i++;
            }
            if(tmp.size() == 0)
            {
                tmp += s[i];
                i++;
            }
            v.push_back(tmp); 
        }

        v = trungto_to_hauto(v);
        cout << cal(v) << "\n";
    }
    return 0;
}