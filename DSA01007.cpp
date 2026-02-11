#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n;
char x[100];

void Try(int i)
{
    for(int j = 'A'; j <= 'B'; j++)
    {
        x[i] = j;
        if(i == n)
        {
            for(int k = 1; k <= n; k++)
                cout << x[k];
            cout << " ";
        }
        else
            Try(i + 1);
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << "\n";
    }

    return 0;
}