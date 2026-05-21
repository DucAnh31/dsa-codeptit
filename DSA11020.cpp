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
        int a[n];
        for(int &x : a) cin >> x;
        int flag = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] <= a[i - 1])
            {
                flag = 0;
                break;
            }
        }
        cout << flag << "\n";
    }


    return 0;
}