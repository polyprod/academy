/********************************
* Filename: insertBefore.c
* 
* author: filbri
* created: 2019-11-21
* 
* notes: this program inserts a node before another node in a linked list
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
void insert_beforeX(int newNode, int insertNode);
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
    printf("Adding id 666 before id 102:\n");
    insert_beforeX(666, 102);
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

// function to add node before specific node in linked list
void insert_beforeX(int newNode, int insertNode)
{
    // create a new node
    struct node *node666 = NULL;
    // allocate memory for new node
    node666 = (struct node*)malloc(sizeof(struct node));
    node666->id = newNode; // assign a value to id
    node666->link = NULL;

    // create a temp node to iterate through list
    struct node *tempNode = NULL;
    tempNode = head; // point tempNode to the first element in the linked list

    int location = 1;

    // find location of insertNode in list
    while (tempNode != NULL)
    {
        if (tempNode->id == insertNode)
        {
            break;
        }
        else
        {
            location++; // increase location by 1
            tempNode = tempNode->link; // iterate tempNode by 1
        }
    }
    
    // insert node666 before insertNode in the linked list
    int i = 1;
    tempNode = head; // reset tempNode
    while (i < location - 1) // find location one index before insertNode
    {
        tempNode = tempNode->link; // iterate tempNode by 1
        i++; // increase i by 1
    }
    node666->link = tempNode->link; // point node666 to what tempNode pointed to before
    tempNode->link = node666; // point tempNode to node666
}

    

    

    