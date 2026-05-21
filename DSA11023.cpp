#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node {
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

void insert(node* root, int x)
{
    if(root == NULL)
        return;
    if(root->data < x)
    {
        if(root->right == NULL)
            root->right = makenode(x);
        else
            insert(root->right, x);
    }
    else
    {
        if(root->left == NULL)
            root->left = makenode(x);
        else
            insert(root->left, x);
    }
    
}

int dosau(node* root)
{
    if(root == NULL)
        return 0;
    return max(dosau(root->left) + 1, dosau(root->right) + 1);
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
            int tmp; cin >> tmp;
            if(i == 1)
            {
                root = makenode(tmp);
            }
            else
            {
                insert(root, tmp);
            }
        }
        cout << dosau(root) - 1<< "\n";
    }



    return 0;
}