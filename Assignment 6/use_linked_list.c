#include "linked_list.h"

int main()
{
    // variable declaration
    char ch;
    int value;
    node *head = NULL; // Empty list

    do
    {
        scanf(" %c", &ch); // user input
        switch (ch)
        {
        // endofList function call
        case 'a':
            scanf("%d", &value);
            endofList(&head, value);
            break;
        // new_head function call
        case 'b':
            scanf("%d", &value);
            new_head(&head, value);
            break;
        // remove function call
        case 'r':
            removeFirst(&head);
            break;
        // print function call
        case 'p':
            print(head);
            printf("\n");
            break;
        // default or 'q' case
        default:
            terminate(head);
            break;
        }
    } while (ch != 'q');

    return 0;
}