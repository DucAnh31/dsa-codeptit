#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n;
char x[100];

void Try(int i)
{
    if(i == 1)
    {
        x[i] = 'H';
        Try(i + 1);
    }
    else if(i == n)
    {
        x[i] = 'A';
        for(int k = 1; k <= n; k++)
            cout << x[k];
        cout << "\n";
        
    }
    else
    {
        if(x[i - 1] == 'H')
        {
            x[i] = 'A';
            if(i == n)
            {
                for(int k = 1; k <= n; k++)
                    cout << x[k];
                cout << "\n";
            }
            else
                Try(i + 1);
        }
        else    
        {
            x[i] = 'A';
            if(i == n)
            {
                for(int k = 1; k <= n; k++)
                    cout << x[k];
                cout << "\n";
            }
            else
                Try(i + 1);
            x[i] = 'H';
            if(i == n)
            {
                for(int k = 1; k <= n; k++)
                    cout << x[k];
                cout << "\n";
            }
            else
                Try(i + 1);
        }
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
    }


    return 0;
}