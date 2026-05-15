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


bool check(node *root1, node *root2)
{
    if((root1 == NULL && root2 != NULL) ||
       (root1 != NULL && root2 == NULL))
       return false;
    if(root1 == NULL && root2 == NULL)
        return true;
    if(root1->data != root2->data)
        return false;
    
    return check(root1->left, root2->left) &&
           check(root1->right, root2->right);


}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        node *root1 = NULL, *root2 = NULL;
        int n1; cin >> n1;
        for(int i = 1; i <= n1; i++)
        {
            int par, child; char c; cin >> par >> child >> c;
            if(i == 1)
            {
                root1 = makenode(par);
                if(c == 'R')
                    root1->right = makenode(child);
                else
                    root1->left = makenode(child);
            }
            else
                addnode(root1, par, child, c);
        }
        int n2; cin >> n2;
        for(int i = 1; i <= n1; i++)
        {
            int par, child; char c; cin >> par >> child >> c;
            if(i == 1)
            {
                root2 = makenode(par);
                if(c == 'R')
                    root2->right = makenode(child);
                else
                    root2->left = makenode(child);
            }
            else
                addnode(root2, par, child, c);
        }
        if(check(root1, root2))
            cout << "1\n";
        else
            cout << "0\n";
    }



    return 0;
}