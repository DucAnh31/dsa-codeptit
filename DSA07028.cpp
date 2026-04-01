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
        int n; cin >> n;
        int a[n + 1]; 
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        a[0] = 2e9;
        int ans[n + 1];
        stack<int> st;
        for(int i = n; i >= 0; i--)
        {
            while(!st.empty() && a[st.top()] < a[i])
            {
                ans[st.top()] = st.top() - i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}