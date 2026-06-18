#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

void hauto_tiento(string s)
{
    stack<string> st;
    for(int i = 0; i < s.size(); i++)
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
            st.push(c + tmp2 + tmp1); 
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
        hauto_tiento(s);
        cout << "\n";
    }




    return 0;
}