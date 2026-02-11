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
void levelorder(node* root)
{
    if(root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* tmp = q.front(); q.pop();
        cout << tmp->data << " ";
        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
    }
}

void addnode(node* root, int u, int v, char c)
{
    if(root == NULL)
        return;
    if(root->data == u)
    {
        if(c == 'L')
            root->left = makenode(v);          
        else
            root->right = makenode(v);
        return;        
    }
    addnode(root->left, u, v, c);
    addnode(root->right, u, v, c);
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        node* root = NULL;
        for(int i = 1; i <= n; i++)
        {
            int u, v; char c;
            cin >> u >> v >> c;
            if(root == NULL)
            {
                root = makenode(u);
                if(c == 'L')
                    root->left = makenode(v);
                else
                    root->right = makenode(v);
            }
            else
                addnode(root, u, v, c);
        }
        levelorder(root);
        cout << "\n";
    }


    return 0;
}