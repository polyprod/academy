/********************************
* Filename: deleteNode.c
* 
* author: filbri
* created: 2019-11-21
* 
* notes: this program deletes a node in a linked list
* 
* ver: 2019-11-21 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    // data to be stored in this node
    int id;
    // points to next node in the linked list
    struct node *link; 
};

// declare struct variable pointer
struct node *head = NULL; // no elements in list so far

// function declarations
void push_back(struct node **head_ref, struct node *newNode);
void printList(struct node *node);
void deleteNodeX(int deleteNode);
/****************************************************************************************************************************/

int main()
{   
    // create and add 5 items to linked list from front
    for (int i = 0; i < 5; i++)
    {
        struct node *newItem = NULL;
        // allocate memory
        newItem = (struct node*)malloc(sizeof(struct node));
        newItem->id = 100 + i;
        newItem->link = NULL; // because it is now the last element in the linked list
        push_back(&head, newItem); // add node to linked list    
    }
    printList(head);
    printf("Deleting id 102:\n");
    deleteNodeX(102);
    printList(head);

    return 0;
}

/****************************************************************************************************************************/
// function definitions

// function to add item as last element in linked list
void push_back(struct node **head_ref, struct node *newNode)
{
    // if first node is the last node
    if (*head_ref == NULL)
    {
        *head_ref = newNode; // set first node as newNode
    }
    else
    {
        // set 'last' to the last node in the linked list
        struct node *last = *head_ref; // point last to first node
        while (last->link != NULL) // while last does not point to last node
        {
            last = last->link;
        }
        // set last node to new node
        last->link = newNode;
    }
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d", node->id);
        printf("\n");
        node = node->link; // update itself
    }
}

// function to delete a node in linked list
void deleteNodeX(int deleteNode)
{
    struct node *temp = head;
    struct node *p = head; // p now points to first node in linked list
    struct node *q; // declaration of struct node pointer
    int counter = 1;
    
    // find location of node in list
    while (temp != NULL)
    {
        if (temp->id == deleteNode)
        {
            break;
        }
        else
        {
            counter++; // increase counter by 1
            temp = temp->link; // iterate p by 1
        }
    }

    int i = 1;
    while (i < counter - 1) // find location one index before node to be deleted
    {
        p = p->link; // iterate p by 1
        i++; // increase i by 1
    }
    q = p->link; // point q to the node we want to delete
    p->link = q->link; // point p to the node one index in front of q
    q->link = NULL; 
    free(q); // free memory allocation for q 
} 

    

    

    