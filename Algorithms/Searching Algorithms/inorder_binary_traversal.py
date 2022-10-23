'''
Given a binary tree, return the inorder traversal of its nodes' values.
For example:
Given binary tree {0,#,1,2},
   0
    \
     1
    /
   2
return [0,2,1].
'''

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        stack = []
        p = root
        while p or stack:
            # Save the nodes which have left child
            while p:
                p = p.left              
                stack.append(p)
            if stack:
                p = stack.pop()
                # Visit the middle node
                res.append(p.val)
                # Visit the right subtree
                p = p.right
        return res


if __name__ == "__main__":
    n1 = TreeNode(0)
    n2 = TreeNode(1)
    n3 = TreeNode(2)
    n1.right = n2
    n2.left = n3
    assert Solution().inorderTraversal(n1) == [0, 2, 1]
