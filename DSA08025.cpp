#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[8] = {-1,-2,-2,-1,+1,+2,+2,+1};
int dy[8] = {-2,-1,+1,+2,-2,-1,+1,+2};

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        string st, en; cin >> st >> en;
        int x1 = st[0] - 'a' + 1;
        int y1 = st[1] - '0';

        int x2 = en[0] - 'a' + 1;
        int y2 = en[1] - '0';

        int d[10][10];
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++)
                d[i][j] = 0;
        
        d[x1][y1] = 1;
        queue<pair<int,int>> q;
        q.push({x1, y1});
        while(!q.empty())
        {
            pair<int,int> tmp = q.front(); q.pop();
            if(tmp.first == x2 && tmp.second == y2)
            {
                cout << d[x2][y2] - 1<< "\n";
                break;
            }
            for(int i = 0; i < 8; i++)
            {
                int xnew = tmp.first + dx[i];
                int ynew = tmp.second + dy[i];
                if(xnew <= 8 && xnew >= 1
                && ynew <= 8 && ynew >= 1
                && d[xnew][ynew] == 0)
                {
                    d[xnew][ynew] = d[tmp.first][tmp.second] + 1;
                    q.push({xnew, ynew});
                } 
            }
        }
        
    }


    return 0;
}