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
        int i = n - 1;
        while(i >= 1 && a[i] > a[i + 1])
            i--;
        if(i == 0)
        {
            for(int j = 1; j <= n; j++)
                cout << j << " ";
            cout << "\n";
        }
        else
        {
            int j = n;
            while(a[i] > a[j])
                j--;
            swap(a[i], a[j]);
            reverse(a + i + 1, a + n + 1);
            for(int j = 1; j <= n; j++)
                cout << a[j] << " ";
            cout << "\n";
        }
    }


    return 0;
}