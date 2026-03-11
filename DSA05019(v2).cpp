#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int max_area(int a[], int n)
{
    //nho hon ben phai
    stack<int> st_right;
    int min_right[n + 1];
    for(int i = 1; i <= n; i++)
        min_right[i] = n + 1;
    for(int i = 1; i <= n; i++)
    {
        while(!st_right.empty() && a[st_right.top()] > a[i])
        {
            min_right[st_right.top()] = i;
            st_right.pop();
        }
        st_right.push(i);
    }

    //nho hon ben trai
    stack<int> st_left;
    int min_left[n + 1];
    for(int i = 1; i <= n; i++)
        min_left[i] = 0;
    for(int i = n; i >= 1; i--)
    {
        while(!st_left.empty() && a[st_left.top()] > a[i])
        {
            min_left[st_left.top()] = i;
            st_left.pop();
        }
        st_left.push(i);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int pos_right = min_right[i], pos_left = min_left[i];
        pos_right--; pos_left++;
        ans = max(ans, min(a[i], (pos_right - pos_left + 1)));
    }
    return ans;
    
    
    
}


int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int ans = 0;
        int n, m; cin >> n >> m;
        int h[m + 1] = {0};
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                int x; cin >> x;
                if(x == 1)
                    h[j]++;
                else
                    h[j] = 0;
            }
            ans = max(ans, max_area(h, m));
        }
        cout << ans << "\n";
    }

    return 0;
}