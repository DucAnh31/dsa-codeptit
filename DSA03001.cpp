#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int coin[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int cnt = 0;
        for(int i = 9; i >= 0; i--)
        {
            cnt += n / coin[i];
            n %= coin[i]; 
        }
        cout << cnt << "\n";
    }



    return 0;
}