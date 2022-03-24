#include <stdio.h>
#include <stdlib.h>


//self referential stucture
typedef node
{
    char element;
    struct node *nextElement;
} node_t;

typedef node_t* listNodePointers;


//define functions prototypes
void insert(listNodePointers *head, char value);
void insertAtEnd(listNodePointers *head, char value);
void insertAtBeginning(listNodePointers *head, char value);
char delete(listNodePointers *head, char value);
void deleteAtBeginning(listNodePointers *head);
int isEmpty(listNodePointers head);
void printList(listNodePointers currentPointer);


int main(void)
{
   listNodePointers head=NULL; //Initialize the linked list. It is initially empty
   int user_choice=0;
   char item='\0'; //character entered by the user

   //display the user menu
   printf("Enter your choice: \n"
        "  1 to insert an element to the list in alphabetical order. \n"
        "  2 to insert an element at the end of the list . \n"
        "  3 to insert an element at the beginning of the list. \n"
        "  4. to delete an element from the list. \n"
        "  5. to delete an element from the beginning of the list. \n"
        "  6. to end. \n");

    //read input from the user
    printf(":: ");
    scanf("%d", &user_choice);

    //loop through the operations until end request is entered by the user
    while(user_choice!=6)
    {
        switch(user_choice)
        {
        case (1):
            printf("Enter character to insert: \n");
            scanf("%c",&item);
            insert(&head,item);
            printList(head);
            break;
        case(2):
            printf("Enter character to insert: \n");
            scanf("%c",&item);
            insertAtEnd(&head,item);
            printList(head);
            break;
        case(3):
            printf("Enter character to insert \n");
            scanf("%c", item);
            insertAtBeginning(&head,item);
            printList(head);
            break;
        case(4):
            if(!isEmpty(head))
            {
                printf("Enter character to delete: \n");
                scanf("%c",item);

                if(delete(&head, item))
                {
                    printf("Character %c was found and it was deleted. \n",item);
                    printList(head);
                }
                else
                {
                    printf("The character you entered was not found in the linked list.\n");
                }
            }
            else
            {
                printf("The list is empty. I can not delete anything. \n");
            }
            break;
        case(5):
            if(!isEmpty(head))
            {
                deleteAtBeginning(&head);
                printf("I have deleted the first character at the beginning of the list.\n");
            }
            else
            {
                printf("The list is empty and I can not delete anything.\n");
            }
            break;
        default:
            printf("Invalid choice. Enter 1..5 for valid choices.\n");
            break;
        }

        printf("? ");
        scanf("%d",user_choice);
    }

    printf("End of run.\n");


    return 0;
}


void insertAtBeginning(listNodePointers *head, char value)
{
    listNodePointers new_node=malloc(size(node_t));
    new_node->element=value;
    new_node->nextElement=*head;
    *head=new_node;
}

void insertAtEnd(listNodePointers *head, char value)
{
    listNodePointers current=*head;

    if(current!=NULL) //Not empty list, not at the end of the list
    {
        //traverse to the end of the list, last element of the list is NULL
        while(current->nextElement!=NULL)
        {
            current=current->nextElement;
        }

        //at this point we are at the end of the list, because the nextElement is NULL. We will add a new item to the list now
        current->nextElement=malloc(sizeof(node_t));

        //Adding the value to the new last element and setting its element after it to NULL
        current->nextElement->element=value;
        current->nextElement->nextElement=NULL;
    }
    else
    {
        //In this case either the list is empty, there is no head. First element of the list is the head. OR we are already at the end of the list
        current=malloc(sizeof(node_t));

        current->element=value;
        current->nextElement=NULL;
        *head=current;
    }


}
