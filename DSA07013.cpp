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
        stack<int> st;
        for(char c : s)
        {
            if(c >= '0' && c <= '9')
                st.push(c - '0');
            else
            {
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                if(c == '+')    
                    st.push(x + y);
                else if(c == '-')
                    st.push(y - x);
                else if(c == '*')
                    st.push(x * y);
                else
                    st.push(y / x);
            }
        }
        cout << st.top() << "\n";
    }


    return 0;
}