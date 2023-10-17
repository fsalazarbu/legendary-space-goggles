#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

void endofList(node **h_ref, int value);

// Function to add a node as the new head of the list
void new_head(node **h_ref, int value);

// function to remove the head node
void removeFirst(node **h_ref);

// function to display the list
void print(node *node);

// Function to free and terminate the program
void terminate(node *head);