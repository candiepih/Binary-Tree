# binary_trees
A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

This topic's aim was also to understand the following concepts:-

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree


## DATA STRUCTURES

The following data structure was used to accomplish the tasks for this project

### Basic Binary Tree

```c

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

```

### Binary Search Tree

```c

typedef struct binary_tree_s bst_t;

```

### AVL Tree

```c

typedef struct binary_tree_s avl_t;

```

### Max Binary Heap

```c

typedef struct binary_tree_s heap_t;

```

## FILES

The following files were used to test my understanding on the concepts

[printing_funcs.c](../master/printing_funcs.c)

contains functions used only for visualization purposes

[0-binary_tree_node.c](../master/0-binary_tree_node.c)

function that creates a binary tree node

[1-binary_tree_insert_left.c](../master/1-binary_tree_insert_left.c)

function that inserts a node as the left-child of another node

[2-binary_tree_insert_right.c](../master/2-binary_tree_insert_right.c)

function that inserts a node as the right-child of another node

[3-binary_tree_delete.c](../master/3-binary_tree_delete.c)

function that deletes an entire binary tree

[4-binary_tree_is_leaf.c](../master/4-binary_tree_is_leaf.c)

function that checks if a node is a leaf

[5-binary_tree_is_root.c](../master/5-binary_tree_is_root.c)

function that checks if a given node is a root

[6-binary_tree_preorder.c](../master/6-binary_tree_preorder.c)

function that goes through a binary tree using pre-order traversal

[7-binary_tree_inorder.c](../master/7-binary_tree_inorder.c)

function that goes through a binary tree using in-order traversal

[8-binary_tree_postorder.c](../master/8-binary_tree_postorder.c)

function that goes through a binary tree using post-order traversal

[9-binary_tree_height.c](../master/9-binary_tree_height.c)

function that measures the height of a binary tree

[10-binary_tree_depth.c](../master/10-binary_tree_depth.c)

function that measures the depth of a node in a binary tree

