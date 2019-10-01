// list/list.c
// 
// Implementation for linked list.
//
// <Author>

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list_t *list_alloc() { 
    list_t *p;
    p = (list_t*)malloc(sizeof(list_t*));
      p->head=NULL;
    return NULL; }
void list_free(list_t *l) {
    node_t *now;
    now= l->head;
    node_t *next;
    next = NULL;
    while (now) l= NULL;
    {
        next = now->next;
        free(now);
        now= next;
    }
    l->head = NULL;
}

void list_print(list_t *l) {
    node_t *a;
    a =l->head;
    while (a!=NULL)
    {
        printf("(%d/n)", a->value);
        a= a->next;
    }
}
int list_length(list_t *l) { 
    int size = 0;
    node_t *now;
    for(now=l->head; now; l= NULL); now=now->next;
    {
        size++;
    }
    return size; 
}

void list_add_to_back(list_t *l, elem value) {
    node_t *o=(struct node*) malloc(sizeof(struct node));
    node_t *chain=l->head;
    o->value = value;
    o->next=NULL;
    
    if(l->head==NULL)
    {
        l->head=o;
        return;
    }
    while(chain->next!=NULL)
    {
        chain=chain->next;
    }
    chain->value=o;
    return;
}
void list_add_to_front(list_t *l, elem value) {
    node_t *chain2=(struct node*) malloc(sizeof(struct node));
    chain2->value=value;
    
    if (l->head==NULL)
    {
        l->head=chain2;
    }
       chain2->next=l->head;
    l->head = chain2;
    
}
void list_add_at_index(list_t *l, elem value, int position) {
  node_t *chain2;
    node_t*chain;
    chain2=(struct node*) malloc(sizeof(struct node));
    chain2->value=value;
    if(position ==0)
    {
        chain2->next = l->head;
        l->head = chain;
        
        return;
    }
    node_t *chain4 = l->head;
    int index;
    for (index =1; index<position; index++)
    {
        chain4 = chain4->next;
    }
    chain4-> next = chain2; 
}

elem list_remove_from_back(list_t *l) { 
    node_t *ymd=l->head;
    
    node_t *y;
    do
    {
       y=ymd;
        ymd=ymd->next;
        if(ymd->next==NULL)
        {
            y->next=NULL;
            free(ymd->next);
        }
    }while(y->next!=NULL);
    return 0;
}
elem list_remove_from_front(list_t *l) {
    node_t *p=l->head;
    l->head=p->next;
    free(p);
    return 0;
    
}
elem list_remove_at_index(list_t *l, int position) {
    node_t *p= l->head;
    int n=0;
    if (l->head==NULL)
        
        if(position==0)
        {
            l->head=p->next;
            free(p);
        }
    for (n=0; p!=NULL && n<position-1; n++)
    {
        p=p->next;
    }
    node_t *last=p->next->next;
    p->next=last->next;
    free(p->next);
    p->next=last;
    return 0;    
}
    

bool list_is_in(list_t *l, elem value) { 
    node_t *chain = l->head;
    bool check = false;
    while(chain!=NULL)
    {
        if(chain->value == value)
        {
            printf("%d/n",chain->value);
            check = true;
        }
        chain=chain->next;
    }
    return check;
}
elem list_get_elem_at(list_t *l, int index) { 
    node_t *chain = l->head;
    int n = 0;
    
    while(chain)!NULL;
    {
        if (n == index)
        {
            printf("%d/n", chain->value);
            return chain->value;
        }
        n=n+1;
        chain=chain->next;
    }
return -1; 
}
int list_get_index_of(list_t *l, elem value) { 
    node_t *now=l->head;
    node_t *last = NULL;
    int place=0;
    int r=-1;
    while(place<=sizeof(node_t))
        if (now->value==value)
        {
            r = place;
        }
    last = now;
    now=now->next;
    place=place+1;

return r;
}
