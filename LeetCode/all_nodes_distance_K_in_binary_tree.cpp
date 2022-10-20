// Problem Link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

// Solution:

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*>q;
        q.push(root);
        map<TreeNode*, TreeNode*>par;
        map<TreeNode*, int>vis;
        vector<int>ans;
        int dist = 0;
        par[root] = NULL;
        // Storing parent of every node.
        while (!q.empty()) {
            auto fr = q.front();
            q.pop();
            if (fr->left != NULL) par[fr->left] = fr, q.push(fr->left);
            if (fr->right != NULL) par[fr->right] = fr, q.push(fr->right);
        }
        q.push(target);
        vis[target] = 1;
        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                auto fr = q.front();
                q.pop();
                if (dist == k) {ans.push_back(fr->val); continue;}
                // Pushing left, right and parent.
                if (fr->left != NULL && vis.find(fr->left) == vis.end()) q.push(fr->left), vis[fr->left] = 1;
                if (fr->right != NULL && vis.find(fr->right) == vis.end()) q.push(fr->right), vis[fr->right] = 1; 
                if (par[fr] != NULL && vis.find(par[fr]) == vis.end()) q.push(par[fr]), vis[par[fr]] = 1;
            }
            dist++;
        }
        return ans;
    }
};