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
        int n = s.size();
        stack<int> st;
        int ans = 0;
        for(int i = 0; i <= n; i++)
        {
            st.push(i + 1);
            if(s[i] == 'I' || i == n)
            {
                while(!st.empty())
                {
                    ans = ans * 10 + st.top();
                    st.pop();
                }
            }
        }
        cout << ans << "\n";
    }


    return 0;
}