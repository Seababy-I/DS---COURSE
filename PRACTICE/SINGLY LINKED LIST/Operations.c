#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node* createnode(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void beginInsert(int value)
{
   struct node *newnode = createnode(value);
   newnode->next =head;
   head = newnode;
}

void lastInsert(int value)
{
    struct node* newnode = createnode(value);
    newnode->next = NULL;
    struct node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void middleInsert(int value, int loc)
{
    struct node* newnode = createnode(value);
    struct node* temp = head;
    for (int i=0; i<loc-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void DelBegin()
{
    struct node* temp = head;
    head = head->next;
    free(temp);
}

void Dellast()
{
    struct node *temp;
    while(temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void DelMiddle(int loc)
{
    struct node* temp = head;
    for(int i=0; i<loc-1; i++)
    {
        temp = temp->next;
    }
    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

void Search(int value)
{
    struct node *temp = head;
    while(temp !=NULL)
    {
        if(temp->data == value)
        {
            printf("Value found\n");
            return;
        }
        temp = temp->next;
    }
    printf("Value not found\n");
}

void Reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

void display()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, value, loc;
    while(1)
    {
        printf("1. Insert at beginning\n");
        printf("2. Insert at last\n");
        printf("3. Insert at middle\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from last\n");
        printf("6. Delete from middle\n");
        printf("7. Search\n");
        printf("8. Reverse\n");
        printf("9. Display\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                beginInsert(value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                lastInsert(value);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter location to insert: ");
                scanf("%d", &loc);
                middleInsert(value, loc);
                break;
            case 4:
                DelBegin();
                break;
            case 5:
                Dellast();
                break;
            case 6:
                printf("Enter location to delete: ");
                scanf("%d", &loc);
                DelMiddle(loc);
                break;
            case 7:
                printf("Enter value to search: ");
                scanf("%d", &value);
                Search(value);
                break;
            case 8:
                Reverse();
                break;
            case 9:
                display();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}