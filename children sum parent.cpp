int isSumProperty(Node *root)
{
 if(root == NULL or (root->left == NULL and root->right == NULL)){
     return 1;
 }
 int left_sum = 0;
 int right_sum = 0;
 if(root->left!=NULL){
     left_sum = root->left->data;
 }
 if(root->right!=NULL){
     right_sum = root->right->data;
 }
 if(root->data == (left_sum+right_sum) and isSumProperty(root->left) and isSumProperty(root->right)){
     return 1;
 }
 return 0;
}
