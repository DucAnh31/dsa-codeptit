#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int n, a[100], x[100];
vector<string> ans;

void Try(int i, int last)
{
    if (i > n)
        return;
    for (int j = last + 1; j <= n; j++)
    {
        if (i == 1 || a[j] >= x[i - 1])
        {
            x[i] = a[j];
            if (i >= 2)
            {
                string tmp;
                for (int k = 1; k <= i; k++)
                {
                    tmp += to_string(x[k]);
                    tmp += " ";
                }
                ans.push_back(tmp);
            }
            Try(i + 1, j);
        }
    }
}

int main()
{
    Duc_Anh

            cin >>
        n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, 0);
    sort(ans.begin(), ans.end());
    for (string s : ans)
    {
        cout << s;
        cout << "\n";
    }

    return 0;
}