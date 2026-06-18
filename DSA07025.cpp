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
        stack<long long> st;
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            string s; cin >> s;
            if(s != "+" && s != "-" && s != "*" && s != "/")
            {
                st.push(stoll(s));
            }
            else
            {
                long long tmp2 = st.top(); st.pop();
                long long tmp1 = st.top(); st.pop();
                if(s == "+")
                {
                    st.push(tmp1 + tmp2);
                }
                if(s == "-")
                {
                    st.push(tmp1 - tmp2);
                }
                if(s == "*")
                {
                    st.push(tmp1 * tmp2);
                }
                if(s == "/")
                {
                    st.push(tmp1 / tmp2);
                }
            }
            
        }
        cout << st.top() << "\n";
    }


    return 0;
}