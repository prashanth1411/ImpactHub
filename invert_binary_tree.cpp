/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
      TreeNode* invertTree(TreeNode* root) {
           if (!root) return nullptr;
          
          queue<TreeNode*> q;
          q.push(root);
          
          while (!q.empty()) {
              TreeNode* node = q.front();
              q.pop();
              
              
              swap(node->left, node->right);
              
             
              if (node->left) q.push(node->left);
              if (node->right) q.push(node->right);
          }
          
          return root;
      }
  };