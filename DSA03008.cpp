#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

struct congviec
{
    int start, end, oldID;
};
bool cmp(congviec p1, congviec p2)
{
    return p1.end < p2.end;
}

int main()
{
    Duc_Anh int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        congviec a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].start;
            a[i].oldID = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].end;
        }
        sort(a, a + n, cmp);
        vector<int> ans;
        int kthuc = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].start >= kthuc)
            {
                kthuc = a[i].end;
                ans.push_back(a[i].oldID);
            }
        }
        cout << ans.size() << "\n";
    }

    return 0;
}