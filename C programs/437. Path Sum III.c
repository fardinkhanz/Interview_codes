/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

long long dfs(struct TreeNode* node, long long target) {
    if (!node) {
        return 0;
    }

    long long count = 0;
    if (node->val == target) {
        count++;
    }

    count += dfs(node->left, target - node->val);
    count += dfs(node->right, target - node->val);

    return count;
}

long long pathSum(struct TreeNode* root, long long targetSum) {
    if (!root) {
        return 0;
    }

    long long total_count = dfs(root, targetSum);
    total_count += pathSum(root->left, targetSum);
    total_count += pathSum(root->right, targetSum);

    return total_count;
}
