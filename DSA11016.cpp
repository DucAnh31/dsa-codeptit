#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


struct node
{
    int data;
    node* left;
    node* right;
};

node* makenode(int x)
{
    node* tmp = new node;
    tmp->data = x;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

void addnode(node* root, int u, int v, char x)
{
    if(root == NULL)
        return;
    if(root->data == u)
    {
        if(x == 'L')
            root->left = makenode(v);
        else
            root->right = makenode(v);
    }
    else
    {
        addnode(root->left, u, v, x);
        addnode(root->right, u, v, x);
    }
}



int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        vector<int> value;
        int n; cin >> n;
        node* root = NULL;
        for(int i = 1; i <= n; i++)
        {
            int u, v; char x;
            cin >> u >> v >> x;
            if(i == 1)
            {
                root = makenode(u);
                value.push_back(u);
            }
            value.push_back(v);
            addnode(root, u, v, x);
        }
        sort(value.begin(), value.end());
        for(int x : value)
            cout << x << " ";
        cout << "\n";

    }

    return 0;
}