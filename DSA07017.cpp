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
        stack<int> st1, st2;
        int lonhon[n], behon[n];
        for(int i = 0; i < n; i++)
        {
            lonhon[i] = behon[i] = -1;
        }
        for(int i = 0; i < n; i++)
        {
            while(!st1.empty() && a[st1.top()] < a[i])
            {
                lonhon[st1.top()] = i;
                st1.pop();
            }
            st1.push(i);
        }
        for(int i = 0; i < n; i++)
        {
            while(!st2.empty() && a[st2.top()] > a[i])
            {
                behon[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }
        for(int i = 0; i < n; i++)
        {
            if(lonhon[i] == -1)
                cout << -1 << " ";
            else
            {
                if(behon[lonhon[i]] == -1)
                    cout << -1 << " ";
                else
                    cout << a[behon[lonhon[i]]] << " ";
            }
                  
        }
        cout << "\n";
    }
    return 0;
}