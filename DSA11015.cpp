#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int flag = 0;
int ans = -2e9;

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

void addnode(node* root, int par, int child, char c)
{
    if(root == NULL)
        return;
    if(root->data == par)
    {
        if(c == 'L')
        {
            root->left = makenode(child);
            flag = 1;
        }
        else
        {
            root->right = makenode(child);
            flag = 1;
        }
    }
    else
    {
        if(flag == 0)
            addnode(root->left, par, child, c);
        if(flag == 0)
            addnode(root->right, par, child, c);
    }
}

int get_max(node* root)
{
    int val_left = 0;
    int val_right = 0;
    if(root->left != NULL && root->right != NULL)
    {
        val_left = get_max(root->left);
        val_right = get_max(root->right);
        ans = max(ans, val_left + val_right + root->data);
        return max(val_left, val_right) + root->data;
    }
    else if(root->left != NULL)
    {
        val_left = get_max(root->left);
        return val_left + root->data;
    }
    else if(root->right != NULL)
    {
        val_right = get_max(root->right);
        return val_right + root->data;
    }
    else
        return root->data;
    
}



int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        
        ans = -2e9;
        node* root = NULL;
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            flag = 0;
            int par, child; char c;
            cin >> par >> child >> c;
            if(root == NULL)
            {
                root = makenode(par);
                if(c == 'L')
                    root->left = makenode(child);
                else
                    root->right = makenode(child);
            }
            else
                addnode(root, par, child, c);
        }
        get_max(root);
        cout << ans << "\n";
    }


    return 0;
}