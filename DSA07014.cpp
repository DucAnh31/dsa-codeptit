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
        stack<int> st;
        string s; cin >> s;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            char c = s[i];
            if(isdigit(c))
                st.push(c - '0');
            else
            {
                int tmp1 = st.top(); st.pop();
                int tmp2 = st.top(); st.pop();

                if(c == '+')
                    st.push(tmp1 + tmp2);
                else if(c == '-')
                    st.push(tmp1 - tmp2);
                else if(c == '*')
                    st.push(tmp1 * tmp2);
                else
                    st.push(tmp1 / tmp2);
            }
        }
        cout << st.top() << "\n";
    }

    return 0;
}