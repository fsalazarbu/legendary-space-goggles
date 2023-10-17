#include "linked_list.h"

// structure for the nodes
typedef struct node
{
    int value;
    struct node *link;
} node;

// Function to add a node at the end of the list
void endofList(node **h_ref, int value)
{
    node *new_node = malloc(sizeof(node)); // memory allocation for the new node
    node *last = *h_ref;
    new_node->value = value;
    new_node->link = NULL;
    // checks if the node is empty
    if (*h_ref == NULL)
    {
        *h_ref = new_node;
        return;
    }
    // while loop to keep going through the nodes if last pointer is not empty
    while (last->link != NULL)
        last = last->link;

    last->link = new_node;
}

// Function to add a node as the new head of the list
void new_head(node **h_ref, int value)
{
    node *new_node = (node *)malloc(sizeof(node));

    new_node->value = value;
    new_node->link = (*h_ref);
    (*h_ref) = new_node; // assigns new_node as the new pointer
}

// function to remove the head node
void removeFirst(node **h_ref)
{
    if (*h_ref == NULL)
    {
        return;
    }

    // temporary node to point to the next node after the head
    node *temporary = *h_ref;
    *h_ref = temporary->link;
    free(temporary);
}

// function to display the list
void print(node *node)
{
    // loop that displays each value until it hits the end of the list
    while (node != NULL)
    {
        printf("%d ", node->value);
        node = node->link; // pointer to point to next node
    }
}

// Function to free and terminate the program
void terminate(node *head)
{
    node *temporary;

    while (head != NULL)
    {
        temporary = head;
        head = head->link;
        free(temporary);
    }
}