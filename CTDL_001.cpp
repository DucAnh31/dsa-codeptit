#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, a[20];
bool check()
{
    int l = 1, r = n;
    while(l < r)
    {
        if(a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check())
            {
                for(int k = 1; k <= n; k++)
                    cout << a[k] << " ";
                cout << "\n"; 
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    Duc_Anh
    cin >> n;
    Try(1);
    return 0;
}