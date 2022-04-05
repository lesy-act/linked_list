#include"../src/linked-list.c"
int main()
{
    struct list linked_list;
    create_list(&linked_list);
    int index;
    for ( index = 0; index < 10; index++)
    {
        add_tail(&linked_list,create_node(index));
    }
    show_list(&linked_list);
    reverse_list(&linked_list);
    show_list(&linked_list);
} 


