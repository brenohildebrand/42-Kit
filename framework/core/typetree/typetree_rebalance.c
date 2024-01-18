/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_rebalance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:30:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 11:03:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	left_rotate(t_typetree typetree)
{
	
}

static void	right_rotate(t_typetree typetree)
{
	t_typetree	y;
	t_typetree	x;
	t_typetree	b;
	
	y = typetree;
	x = y->ltree;
	b = x->rtree;
	
	y->ltree = b;
	x->rtree = y;
	if (typetree->address < typetree->parent->address)
		typetree->parent->ltree = x;
	else
		typetree->parent->rtree = x;
	// fix heights
	if (y->ltree->height > y->rtree->height)
}

void	typetree_rebalance(t_typetree typetree)
{
	if (typetree == NULL)
		return ;
	if (typetree->ltree->height - typetree->rtree->height > 1)
	{
		if (typetree->ltree->ltree->height > typetree->ltree->rtree->height)
			left_rotate(typetree);
		else
		{
			right_rotate(typetree->ltree);
			left_rotate(typetree);
		}
	}
	else if (typetree->rtree->height - typetree->ltree->height > 1)
	{
		if (typetree->rtree->rtree->height > typetree->rtree->ltree->height)
			right_rotate(typetree);
		else
		{
			left_rotate(typetree->rtree);
			right_rotate(typetree);
		}
	}
	// update height
}

/* rotate child[d] to root */
/* assumes child[d] exists */
/* Picture:
*
*     y            x
*    / \   <==>   / \
*   x   C        A   y
*  / \              / \
* A   B            B   C
*
*/
static void
avlRotate(AvlTree *root, int d)
{
	AvlTree oldRoot;
	AvlTree newRoot;
	AvlTree oldMiddle;

	oldRoot = *root;
	newRoot = oldRoot->child[d];
	oldMiddle = newRoot->child[!d];
   
  	oldRoot->child[d] = oldMiddle;
  	newRoot->child[!d] = oldRoot;
 	*root = newRoot;
  
 	/* update heights */
 	avlFixHeight((*root)->child[!d]);   /* old root */
	avlFixHeight(*root);                /* new root */
}

/* rebalance at node if necessary */
/* also fixes height */
static void
avlRebalance(AvlTree *t)
{
    int d;

    if(*t != AVL_EMPTY) {
        for(d = 0; d < 2; d++) {
            /* maybe child[d] is now too tall */
            if(avlGetHeight((*t)->child[d]) > avlGetHeight((*t)->child[!d]) + 1) {
                /* imbalanced! */
                /* how to fix it? */
                /* need to look for taller grandchild of child[d] */
                if(avlGetHeight((*t)->child[d]->child[d]) > avlGetHeight((*t)->child[d]->child[!d])) {
                    /* same direction grandchild wins, do single rotation */
                    avlRotate(t, d);
                } else {
                    /* opposite direction grandchild moves up, do double rotation */
                    avlRotate(&(*t)->child[d], !d);
                    avlRotate(t, d);
                }

                return;   /* avlRotate called avlFixHeight */
            }
        }
                  
        /* update height */
        avlFixHeight(*t);
    }
}