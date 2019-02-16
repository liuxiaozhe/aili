/**
 *    author:     UncP
 *    date:    2019-02-16
 *    license:    BSD-3
**/

#ifndef _adapitve_radix_tree_h_
#define _adaptive_radix_tree_h_

typedef struct adaptive_radix_tree adaptive_radix_tree;

adaptive_radix_tree* new_adaptive_radix_tree();
int adaptive_radix_tree_put(adaptive_radix_tree *art, const void *key, size_t len, const void *val);
void* adaptive_radix_tree_get(adaptive_radix_tree *art, const void *key, size_t len);

#endif /* _adaptive_radix_tree_h_ */
