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
        int a[n]; for(int &x : a) cin >> x;
        int right[n], left[n];
        for(int i = 0; i < n; i++)
        {
            right[i] = n, left[i] = -1;
        }

        stack<int> st1;
        for(int i = 0; i < n; i++)
        {
            while(!st1.empty() && a[st1.top()] > a[i])
            {
                right[st1.top()] = i;
                st1.pop();
            }
            st1.push(i);
        }
        stack<int> st2;
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st2.empty() && a[st2.top()] > a[i])
            {
                left[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }
        long long ans = -1;
        for(int i = 0; i < n; i++)
        {
            int l = right[i] - left[i] - 1;
            ans = max(ans, (long long)l * a[i]);

        }
        cout << ans << "\n";
    }


    return 0;
}