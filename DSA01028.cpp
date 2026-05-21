#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k;
vector<int> v;
int x[100];
void Try(int i, int last)
{
    for(int j = last + 1; j <= n; j++)
    {
        x[i] = v[j];
        if(i == k)
        {
            for(int m = 1; m <= k; m++)
                cout << x[m] << " ";
            cout << "\n"; 
        }
        else
            Try(i + 1, j);
    }
}

int main()
{
    Duc_Anh

    int N; cin >> N >> k;
    set<int> se;
    for(int i = 0; i < N; i++)
    {
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    v.push_back(-1);
    for(int x : se)
        v.push_back(x);
    n = v.size() - 1;
    Try(1, 0);


    return 0;
}