#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    string s; cin >> s;
    int n = s.size();
    stack<char> left, right;
    for(int i = 0; i < n; i++)
    {
        char c = s[i];
        
         if(c == '<')
        {
            if(!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if(c == '>')
        {
            if(!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if(c == '-')
        {
            if(!left.empty())
                left.pop();
        }
        else    
            left.push(c);
    }
    vector<char> ans1, ans2;

    while(!left.empty())
    {
        ans1.push_back(left.top());
        left.pop();
    }
    reverse(ans1.begin(), ans1.end());

    while(!right.empty())
    {
        ans2.push_back(right.top());
        right.pop();
    }
    

    for(char x : ans1)
        cout << x;
    for(char x : ans2)
        cout << x;
    


    return 0;
}