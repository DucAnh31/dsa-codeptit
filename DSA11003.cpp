#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int find_root(int in[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(in[i] == x)
            return i;
    return -1;
}

void dequy(int pre[], int in[], int n)
{
    if(n == 0)
        return;
    if(n == 1)
    {
        cout << pre[0] << " ";
        return;
    }
    int pos = find_root(in, n, pre[0]);
    dequy(pre + 1, in, pos);
    dequy(pre + pos + 1, in + pos + 1, n - pos - 1);
    cout << pre[0] << " ";

}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int in[n], pre[n]; 
        for(int &x : in)   
            cin >> x;
        for(int &x : pre)
            cin >> x;
        dequy(pre, in, n);
        cout << "\n";
    }


    return 0;
}
