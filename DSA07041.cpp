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
        int ans = 0;
        stack<char> st;
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                st.push(i);
            else
            {   
                if(!st.empty())
                {
                    st.pop();
                    ans += 2;
                }
                
            }
        }
        cout << ans << "\n";
    }


    return 0;
}