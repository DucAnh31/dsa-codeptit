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

void addnode(node* root, int par, int child, char c)
{
    if(root == NULL)
        return;
    if(root->data == par)
    {
        if(c == 'L')
            root->left = makenode(child);
        if(c == 'R')
            root->right = makenode(child);
    }
    else
    {
        addnode(root->left, par, child, c);
        addnode(root->right, par, child, c);
    }

}


bool check(node *root)
{
    
    if((root->left != NULL && root->right == NULL) || root->right != NULL && root->left == NULL)
        return false;
    if(root->left == NULL && root->right == NULL)
        return true;

    bool check1, check2;
    if(root->left != NULL)
        check1 = check(root->left);
    if(root->right != NULL)
        check2 = check(root->right);
    return check1 && check2;

}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        node *root = NULL;
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int par, child; char c; cin >> par >> child >> c;
            if(i == 1)
            {
                root = makenode(par);
                if(c == 'R')
                    root->right = makenode(child);
                else
                    root->left = makenode(child);
            }
            else
                addnode(root, par, child, c);
        }
        if(check(root))
            cout << "1\n";
        else
            cout << "0\n";
    }



    return 0;
}