/*************************************************************************
	> File Name: 02_binTree.cpp
	> Author: DragonFive
	> Mail: dragonfive2013@163.com
	> Created Time: 2016年08月22日 星期一 22时42分35秒
 ************************************************************************/

#include<iostream>
using namespace std;

//二叉树的结构
struct TreeNode
{
    int val;//数值;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

void visit(int val){}

//下面是先序遍历;
void preorder(TreeNode* root)
{
    if(root==NULL)
        return;
    visit(root->val);
    preorder(root->left);
    preorder(root->right);
}

//下面是中序遍历
void midorder(TreeNode * root)
{
    if(root==NULL)
        return ;
    midorder(root->left);
    visit(root->val);
    midorder(root->right);
}

//下面是后序遍历
void postorder(TreeNode * root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    visit(root->val);
}

int main()
{

    return 0;
}
