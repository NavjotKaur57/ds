#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};
treeNode* FindMin(treeNode *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return FindMin(node->left);
    else
        return node;
}

treeNode *Insert(treeNode *node,int data)
{
    if(node==NULL)
    {
        treeNode *temp;
        temp=new treeNode;
        temp -> data = data;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(data >(node->data))
    {
        node->right = Insert(node->right,data);
    }
    else if(data < (node->data))
    {
        node->left = Insert(node->left,data);
    }
    return node;
}
treeNode * Delet(treeNode *node, int data)
{
    treeNode *temp;
    if(node==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(data < node->data)
    {
        node->left = Delet(node->left, data);
    }
    else if(data > node->data)
    {
        node->right = Delet(node->right, data);
    }
    else
    {
        if(node->right && node->left)
        {
            temp = FindMin(node->right);
            node -> data = temp->data;
            node -> right = Delet(node->right,temp->data);
        }
        else
        {
            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp); 
        }
    }
    return node;
}

void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
int main()
{
    treeNode *root = NULL,*temp;
    int ch;
    //clrscr();
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n";
        cout<<"Enter ur choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>ch;
            root = Insert(root, ch);
            break;
        case 2:
            cout<<"\nEnter element to be deleted:";
            cin>>ch;
            root = Delet(root,ch);
            break;
        case 3:
            cout<<"\nInorder Travesals is:";
            Inorder(root);
            break;
        case 4:
            cout<<"\nPreorder Traversals is:";
            Preorder(root);
            break;
        case 5:
            cout<<"\nPostorder Traversals is:";
            Postorder(root);
            break;
       
        default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }
    return 0;
}
