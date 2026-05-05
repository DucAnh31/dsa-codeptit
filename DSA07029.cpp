#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

// chua AC
int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        string ans = "";
        string s; cin >> s;
        stack<int> st;
        stack<string> kitu;
        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(c >= '0' && c <= '9')
            {
                string so = "";
                while(i < s.size() && s[i] >= '0' && s[i] <= '9')
                {
                    so = so + s[i];
                    i++;
                }
                i--;
                st.push(stoi(so));
            }
            else
            {
                if(c != ']')
                {
                    string tmp = "";
                    tmp += c;
                    kitu.push(tmp);
                }
                else
                {
                    string tmp1 = "";
                    while(kitu.top() != "[")
                    {
                        tmp1 = kitu.top() + tmp1;
                        kitu.pop();
                    }
                    kitu.pop();
                    if(st.size())
                    {
                        string tmp2 = "";
                        for(int k = 1; k <= st.top(); k++)
                            tmp2 += tmp1;
                        st.pop();
                        kitu.push(tmp2);
                    }
                    else
                        kitu.push(tmp1);
                    
                }
            }
        }
        while(kitu.empty() == 0)
        {
            ans = kitu.top() + ans;
            kitu.pop();
        }
        cout << ans << "\n";
        
    }



    return 0;
}