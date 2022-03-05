/* Print all nodes of a perfect binary tree in a specific order.
Given a perfect binary tree, print the values of alternating left and right nodes for each level in a top-
down and bottom-up manner.
For example, there are two ways to print the following tree:
Variation 1: Print Top-Down
(1, 2, 3, 4, 7, 5, 6, 8, 15, 9, 14, 10, 13, 11, 12)

Variation 2: Print Bottom-Up
(8, 15, 9, 14, 10, 13, 11, 12, 4, 7, 5, 6, 2, 3, 1) */


#include<stdio.h>
#include<stdlib.h>
//Creation of structure
struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
};
//Function Declaration
void top_down(struct node *);
void bottom_up(struct node *);
void inorder(struct node *);

int count;
//Main Program
int main()
{
	struct node *head=NULL, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
	l = (struct node *)malloc(sizeof(struct node));
	m = (struct node *)malloc(sizeof(struct node));
	n = (struct node *)malloc(sizeof(struct node));
	o = (struct node *)malloc(sizeof(struct node));
	p = (struct node *)malloc(sizeof(struct node));
	q = (struct node *)malloc(sizeof(struct node));
	r = (struct node *)malloc(sizeof(struct node));
	s = (struct node *)malloc(sizeof(struct node));
	t = (struct node *)malloc(sizeof(struct node));
	u = (struct node *)malloc(sizeof(struct node));
	v = (struct node *)malloc(sizeof(struct node));
	w = (struct node *)malloc(sizeof(struct node));
	x = (struct node *)malloc(sizeof(struct node));
	y = (struct node *)malloc(sizeof(struct node));
	z = (struct node *)malloc(sizeof(struct node));

	head = l;

	l->data = 1;
	l->lptr = m;
	l->rptr = n;
	++count;

	m->data = 2;
	m->lptr = o;
	m->rptr = p;
	++count;

	n->data = 3;
	n->lptr = q;
	n->rptr = r;
	++count;

	o->data = 4;
	o->lptr = s;
	o->rptr = t;
	++count;

	p->data = 5;
	p->lptr = u;
	p->rptr = v;
	++count;

	q->data = 6;
	q->lptr = w;
	q->rptr = x;
	++count;

	r->data = 7;
	r->lptr = y;
	r->rptr = z;
	++count;

	s->data = 8;
	s->lptr = NULL;
	s->rptr = NULL;
	++count;

	t->data = 9;
	t->lptr = NULL;
	t->rptr = NULL;
	++count;

	u->data = 10;
	u->lptr = NULL;
	u->rptr = NULL;
	++count;

	v->data = 11;
	v->lptr = NULL;
	v->rptr = NULL;
	++count;

	w->data = 12;
	w->lptr = NULL;
	w->rptr = NULL;
	++count;

	x->data = 13;
	x->lptr = NULL;
	x->rptr = NULL;
	++count;

	y->data = 14;
	y->lptr = NULL;
	y->rptr = NULL;
	++count;

	z->data = 15;
	z->lptr = NULL;
	z->rptr = NULL;
	++count;

	printf("Total no of nodes in tree are: %d\n",count);

	printf("Inorder\n");
	inorder(head);
	printf("\n");

	printf("top-down approach\n");
	top_down(head);
	printf("\n");

	printf("bottom-up approach\n");
	bottom_up(head);
	printf("\n");

	return 0;
}
//Function
void inorder(struct node *s)
{
	if(s == NULL)
	{
		printf("Tree is empty!\n");
	}

	if(s->lptr != NULL)
	{
		inorder(s->lptr);
	}

	printf("%d ",s->data);

	if(s->rptr != NULL)
	{
		inorder(s->rptr);
	}
}
//Function
void top_down(struct node *h)
{
	printf("In top down\n");

	if(h == NULL)
	{
		printf("Tree is Empty!\n");
	}

	printf("%d ",h->data);

	if(h->lptr != NULL)
		printf("%d %d ",h->lptr->data,h->rptr->data);

	if(h->lptr->lptr == NULL)
		return;

	if(h->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->data);
		printf("%d ",h->lptr->rptr->data);
		printf("%d ",h->rptr->lptr->data);
	}

	if(h->lptr->lptr->lptr == NULL)
		return;

	if(h->lptr->lptr->lptr != NULL)
	{	
		printf("%d ",h->lptr->lptr->lptr->data);	
		printf("%d ",h->rptr->rptr->rptr->data);
		
		printf("%d ",h->lptr->lptr->rptr->data);
		printf("%d ",h->rptr->rptr->lptr->data);

		printf("%d ",h->lptr->rptr->lptr->data);
		printf("%d ",h->rptr->lptr->rptr->data);

		printf("%d ",h->lptr->rptr->rptr->data);
		printf("%d ",h->rptr->lptr->lptr->data);
	}

	if(h->lptr->lptr->lptr->lptr == NULL)
		return;

}
//Function
void bottom_up(struct node *s)
{
	printf("In Bottom up\n");

	if(s == NULL)
	{
		printf("Tree is Empty!\n");
	}

	if(s->lptr->lptr->lptr != NULL)
	{	
		printf("%d ",s->lptr->lptr->lptr->data);	
		printf("%d ",s->rptr->rptr->rptr->data);
		
		printf("%d ",s->lptr->lptr->rptr->data);
		printf("%d ",s->rptr->rptr->lptr->data);

		printf("%d ",s->lptr->rptr->lptr->data);
		printf("%d ",s->rptr->lptr->rptr->data);

		printf("%d ",s->lptr->rptr->rptr->data);
		printf("%d ",s->rptr->lptr->lptr->data);
	}

	if(s->lptr->lptr != NULL)
	{	
		printf("%d ",s->lptr->lptr->data);	
		printf("%d ",s->rptr->rptr->data);
		printf("%d ",s->lptr->rptr->data);
		printf("%d ",s->rptr->lptr->data);
	}

	if(s->lptr != NULL)
		printf("%d %d ",s->lptr->data,s->rptr->data);

	printf("%d ",s->data);


}
