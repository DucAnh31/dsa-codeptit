#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check(string s)
{
    stack<char> st;
    for(char c : s)
    {
        if(c != ')')
            st.push(c);
        else
        {
            int cnt = 0;
            while(st.top() != '(')
            {
                cnt++;
                st.pop();
            }
            //cout << cnt << "\n";
            if(cnt <= 1)
                return true;
            st.pop();
        }
    }
    return false;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    cin.ignore(1);
    while(t--)
    {
        string s; getline(cin, s);
        if(check(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }


    return 0;
}