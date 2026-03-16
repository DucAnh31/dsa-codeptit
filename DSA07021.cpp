#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int solve(string s)
{
    int ans = -1;
    stack<int> st;
    st.push(-1);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
            st.push(i);
        else
        {
            if(!st.empty())
                st.pop();
            if(!st.empty())
                ans = max(ans, i - st.top());
            else
                st.push(i);
        }  
    }
    return ans;
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