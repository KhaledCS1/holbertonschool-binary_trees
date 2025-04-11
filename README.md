# holbertonschool-binary_trees
---

# C - Binary Trees

This project focuses on understanding and implementing the basic concepts and data structures of binary trees in C.
It explores a wide range of tree types (such as BSTs, AVL, and heaps), and operations (such as insertion, deletion, traversal, and more).
Each function is designed with performance and memory efficiency in mind, following the Betty style and Holberton standards.

---

## Header File 📁

- [binary_trees.h](binary_trees.h): Header file containing all data structures, prototypes of all types and functions used for the binary trees project.

---

## Data Structures

```
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Binary Tree */
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;
```

---

## Function Prototypes

| Function | Prototype |
|----------|-----------|
| binary_tree_node | binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); |
| binary_tree_insert_left | binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); |
| binary_tree_insert_right | binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); |
| binary_tree_delete | void binary_tree_delete(binary_tree_t *tree); |
| binary_tree_is_leaf | int binary_tree_is_leaf(const binary_tree_t *node); |
| binary_tree_is_root | int binary_tree_is_root(const binary_tree_t *node); |
| binary_tree_preorder | void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); |
| binary_tree_inorder | void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)); |
| binary_tree_postorder | void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)); |
| binary_tree_height | size_t binary_tree_height(const binary_tree_t *tree); |
| binary_tree_depth | size_t binary_tree_depth(const binary_tree_t *tree); |
| binary_tree_size | size_t binary_tree_size(const binary_tree_t *tree); |
| binary_tree_leaves | size_t binary_tree_leaves(const binary_tree_t *tree); |
| binary_tree_nodes | size_t binary_tree_nodes(const binary_tree_t *tree); |
| binary_tree_balance | int binary_tree_balance(const binary_tree_t *tree); |
| binary_tree_is_full | int binary_tree_is_full(const binary_tree_t *tree); |
| binary_tree_is_perfect | int binary_tree_is_perfect(const binary_tree_t *tree); |
| binary_tree_sibling | binary_tree_t *binary_tree_sibling(binary_tree_t *node); |
| binary_tree_uncle | binary_tree_t *binary_tree_uncle(binary_tree_t *node); |
|binary_tree_print | void binary_tree_print(const binary_tree_t *); |
---

## Tasks 📌

Each task implements a specific functionality of the binary tree data structure.
Check the source files for full implementation and examples.

---

## Author

This project is part of the Holberton School curriculum it was made by Mohammad Alomar & Khaled Almimoni.