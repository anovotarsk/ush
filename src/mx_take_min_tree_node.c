#include "ush.h"

t_tnode* mx_take_min_tree_node(t_tnode *root) {
    t_tnode *min = 0;

    if (root == 0) 
        return 0;
    if (root->left == 0) {
        min = root;
    }
    else {
        min = mx_take_min_tree_node(root->left);
    }
    return min;
}
