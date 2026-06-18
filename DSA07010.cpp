#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

void tiento_trungto(string s)
{
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        char c = s[i];
        if(isalpha(c))
        {
            string tmp = "";
            tmp += c;
            st.push(tmp);
        }
        else
        {
            string tmp1 = st.top(); st.pop();
            string tmp2 = st.top(); st.pop();
            st.push(tmp1 + tmp2 + c); 
        }
    }
    cout << st.top();
}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        tiento_trungto(s);
        cout << "\n";
    }




    return 0;
}