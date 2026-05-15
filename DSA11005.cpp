#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

void dequy(vector<int> in, vector<int> level)
{
    if(in.empty())
        return;

    int root = level[0];
    int index;
    for(int i = 0; i < in.size(); i++)
    {
        if(in[i] == root)
        {
            index = i;
            break;
        }
    }
    vector<int> sub_in_left, sub_in_right, sub_level_left, sub_level_right;
    set<int> mark_sub_level_left;
    for(int i = 0; i < index; i++)
    {
        sub_in_left.push_back(in[i]);
        mark_sub_level_left.insert(in[i]);
    }
    for(int i = index + 1; i < in.size(); i++)
        sub_in_right.push_back(in[i]);

    for(int i = 1; i < level.size(); i++)
    {
        if(mark_sub_level_left.count(level[i]))
            sub_level_left.push_back(level[i]);
        else
            sub_level_right.push_back(level[i]);
    }
    dequy(sub_in_left, sub_level_left);
    dequy(sub_in_right, sub_level_right);
    cout << root << " ";
}



int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> in, level;
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            in.push_back(tmp);
        }
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            level.push_back(tmp);
        }
        dequy(in, level);
        cout << "\n";
    }


    return 0;
}