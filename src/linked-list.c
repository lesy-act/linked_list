#include"../include/linked-list.h"
struct node* create_node(int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    if(NULL == new_node)
    {
        printf("can not create node \n");
    }
    new_node->data = data;
    new_node->next_ptr = NULL;
    return new_node;
}
void create_list(struct list *linked_list)
{
    linked_list->head_node = NULL;
    linked_list->tail_node = NULL;
}
void add_head(struct list *linked_list,struct node *new_node)
{
    new_node->next_ptr = linked_list->head_node;
    linked_list->head_node = new_node;
    ++cnt_node;
}
void add_tail(struct list *linked_list,struct node *new_node)
{
  if(NULL == linked_list->head_node)
  {
    linked_list->head_node = new_node;
    linked_list->tail_node = new_node;
    ++cnt_node;
  }
  linked_list->tail_node->next_ptr = new_node;
  linked_list->tail_node = new_node;
}
// void del_node(struct list *linked_list, int key)
// {
    
//     int flag = 0;
//     struct node *new_node = NULL;
//     new_node = linked_list->head_node;
//     while (NULL != new_node)
//     {
//         if(key == new_node->data)
//         {
//             flag = 1;
//             new_node->next_ptr = NULL;
//             new_node = NULL;
//             break;
//         }
//         new_node = new_node->next_ptr;
//     }
    
// }

void del_first_node(struct list *linked_list)
{
    struct node* tmp_node = NULL;
    tmp_node = linked_list->head_node->next_ptr;
    free(linked_list->head_node);
    linked_list->head_node = tmp_node;
}
void del_last_node(struct list *linked_list)
{
    struct node* tmp_node = NULL;
    tmp_node = linked_list->tail_node;
    free(linked_list->head_node);
    linked_list->head_node = tmp_node;
}
void reverse_list(struct list *linked_list)
{
    struct node* current_node = linked_list->head_node;
    struct node* prev_node = NULL;
    struct node* next_node = NULL;
    while (NULL != current_node)
    {
        next_node = current_node->next_ptr;
        current_node->next_ptr = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    linked_list->head_node = prev_node;
}
void show_list(struct list *linked_list)
{
    struct node *current_node = linked_list->head_node;
    if(NULL == current_node)
    {
        printf("NULL");
    }
    while(NULL != current_node)
    {
        printf("%d -> ",current_node->data);
        current_node = current_node->next_ptr;
    }
    printf("NULL     \n");
}

