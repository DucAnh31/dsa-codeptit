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
        int a[n], ans[n];
        for(int &x : a)
            cin >> x;
        for(int &x : ans)
            x = -1;
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && a[st.top()] < a[i])
            {
                ans[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        for(int x : ans)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}