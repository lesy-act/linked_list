#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include<stdio.h>
#include<stdlib.h>
int cnt_node = 0;
struct node{
    int data;
    struct node *next_ptr;
};
struct list{
    struct node *head_node;
    struct node *tail_node;
};
struct node* create_node(int data);
void create_list(struct list *linked_list);
void add_head(struct list *linked_list, struct node *new_node);
void del_first_node(struct list *linked_list);
void del_last_node(struct list *linked_list);
void del_node(struct list *linked_list, int key);
void add_tail(struct list *linked_list, struct node *new_node);
void reverse_list(struct list *linked_list);
void show_list(struct list *linked_list);
#endif /*LINKED_LIST_H_*/
