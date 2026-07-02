#include <bits/stdc++.h>
using namespace std;

#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() 
{
    Duc_Anh

    int t; 
    cin >> t;
    while(t--) 
    {
        string s; 
        cin >> s;
        
        stack<int> st; 
        st.push(0); 
        string ans = "";
        
        for(int i = 0; i < s.size(); i++) 
        {
            char c = s[i];
            
            if(isalpha(c)) 
                ans += c; 
            
            else if(c == '+' || c == '-') 
            { 
                if(st.top() == 1) 
                {
                    if(c == '+')
                        ans += '-';
                    else
                        ans += '+';
                }
                else 
                    ans += c;
                
            }
            else if(c == '(') 
            {
                
                if(i > 0 && s[i-1] == '-') 
                    st.push(1 - st.top());
                else 
                    st.push(st.top());
            }
            else if(c == ')') 
            {
                if(!st.empty()) 
                    st.pop();
            }
        }
        cout << ans << "\n";
    }

    return 0;
}