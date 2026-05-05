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
void insert(node* root, int key)
{
    if(root->data > key)
    {
        if(root->left == NULL)
        {
            node* tmp = makenode(key);
            root->left = tmp;
        }
        else
            insert(root->left, key);
    }
    else
    {
        if(root->right == NULL)
        {
            node* tmp = makenode(key);
            root->right = tmp;
        }
        else
            insert(root->right, key);
    }
}

void dfs(node *root)
{
    if(root->left == NULL && root->right == NULL)
        cout << root->data << " ";
    else
    {
        if(root->left != NULL)
            dfs(root->left);
        if(root->right != NULL)
            dfs(root->right);
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        node* root = NULL;
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            if(root == NULL)
                root = makenode(x);
            else
                insert(root, x);  
        }
        dfs(root);
        cout << "\n";
    }


    return 0;
}