#include<algorithm>
#include<climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if(root==NULL){
        pair<int,int> p;
        p.first=INT_MAX;
        p.second=INT_MIN;
        return p;
    }
    if(root->left==NULL&&root->right==NULL){
        pair<int,int> p;
        p.first=root->data;
        p.second=root->data;
        return p;
    }
    
    
    pair<int,int> left_ans=getMinAndMax(root->left);
    pair<int,int> right_ans=getMinAndMax(root->right);
    int left_min=left_ans.first;
    int left_max=left_ans.second;
    int right_min=right_ans.first;
    int right_max=right_ans.second;
    int Max=max(max(left_max,right_max),root->data);
    int Min=min(min(left_min,right_min),root->data);
    pair<int,int> p;
    p.first=Min;
    p.second=Max;
    return p;
    
    // Write your code here
}
