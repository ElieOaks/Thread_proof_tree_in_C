#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

///////////////----- Structures ----------/////////////////////
typedef struct node node_t;
typedef struct tree tree_t;

struct node {
  int key;
  void *elem;
  bool red;
  volatile int marked;

  node_t *up;
  node_t *left;
  node_t *right;
};

struct tree {
  node_t *root;
  int size;
};
///////////////------ Content ------------/////////////////////

tree_t *new_tree();
node_t *new_node();
bool add_elem();
void  *find_elem();
bool find_key();
bool remove_elem();
bool balance_tree();

//////////////------ Code ----------------/////////////////////
/**
 * Creates a new tree
 */
tree_t *new_tree() {
  tree_t *new = calloc(1, sizeof(tree_t));

  new->root = NULL;
  new->size = 0;

  return new;
}


node_t *new_node();
bool add_elem();
void  *find_elem();
bool find_key();
bool remove_elem();
bool balance_tree();
