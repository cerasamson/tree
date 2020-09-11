#include <iostream>

using namespace std;

template <class myType>
struct binaryTreeNode
{
    myType item;
    binaryTreeNode<type> *left, *right;
};

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
void deepCopy(binaryTreeNode<myType>*& root, binaryTreeNode<myType>*& copyRoot)
{
    if (root2 == NULL)
        root1 = NULL;
    
    else
    {
        root1 = new binaryTreeNode<myType>;
        root1->item = root2->item;
        
        deepCopy(root1->left, root2->left);
        deepCopy(root1->right, root2->right);
    }
    return;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
int countNodes(binaryTreeNode<myType> *root)
{
    if (root == NULL)
        return 0;
    
    return countNodes(tree->left) + countNodes(tree->right);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
void preorder(binaryTreeNode<myType> *root)
{
    if (root == NULL)
        return;
    
    cout << root->item << endl;
    preorder(root->left);
    preorder(root->right);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
void postorder(binaryTreeNode<myType> *root)
{
    if (root == NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout << root->item << endl;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
int countLeaves(binaryTreeNode<myType> *root)
{
    if (root == NULL)
        return 0;
    
    if (root->left == NULL && root->right == NULL)
        return countLeaves(root->left) + countLeaves(root->right);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
int countNonLeafNodes(binaryTreeNode<myType> *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    
    return countNonLeafNodes(root->left) + countNonLeadNodes(root->right);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
int oneChild(binaryTreeNode<myType> *root)
{
    if (root == NULL)
        return 0;
    
    if (root->left == NULL && root->right != NULL)
        return 1 + oneChild(root->right);
    
    if (root->right == NULL && root->left != NULL)
        return 1 + oneChild(root->left);

    return oneChild(root->left) + oneChild(root->right);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
template <class myType>
int determineHeight(binaryTreeNode<myType> *root)
{
if (root != NULL)
    {
        int left = determineHeight(root->left);
        int right = determineHeight(root->right);
        
        if (left > right)
            return left+1;

        else
            return right+1;
    }
 
    return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void printTree(binTreeNode* root)
{
    myQueue<binTreeNode*> queue;
    queue.enqueue(root);
    while (!queue.isEmpty())
    {
        binTreeNode* curr = queue.peek();
        queue.dequeue();
        cout << curr->id << " ";
        if (curr->left != NULL)
            queue.enqueue(curr->left);
        if (curr->right != NULL)
            queue.enqueue(curr->right);
    }
    cout << endl;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void recPrintTree(binTreeNode* root)
{
    if (root == NULL)
        return;
    
    recPrintTree(root->left);
    recPrintTree(root->right);
        cout << root->id << " ";

}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int sumOfLeftLeaves(binTreeNode* root) {
    if (root == NULL)
        return 0;
    
    // determining if it is a left leaf
    if (root->left && !root->left->right && !root->left->left)
        return root->left->val + sumOfLeftLeaves(root->right);
    
    // traverse the list
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}