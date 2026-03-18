#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh
    int t; cin >> t;
    cin.ignore(1);
    while(t--)
    {
        string s, w;
        getline(cin, s);
        stack<string> st;
        stringstream ss(s);
        while(ss >> w)
        {
            st.push(w);
        }
        while(!st.empty())
        {
            cout << st.top() << " "; 
            st.pop();
        }
        cout << "\n";
    }



    return 0;
}