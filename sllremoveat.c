#include<stdio.h>
#include<stdlib.h>
/* Structure Definition */
struct Node
{
    int price;
    struct Node *next;
};

struct Node *head = NULL, *tail = NULL;

void append(int price)
{
    if(head == NULL)
    {
        head = malloc(sizeof(struct Node));
        head->price = price;
        head->next = NULL;
        tail = head;
    }
    else if(head->next == NULL)
    {
        struct Node *temp = malloc(sizeof *temp);
        temp->price = price;
        temp->next = NULL;
        head->next = temp;
        tail = temp;
    }
    else
    {
        struct Node *temp = malloc(sizeof *temp);
        temp->price = price;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
}

void removeAt(int position)
{
    struct Node *ptr = malloc(sizeof *ptr);
    ptr = head;
    if(position == 1)
    {
        head = head->next;
        free(ptr);
    }
    else if(position == 2)
    {
        struct Node *temp = malloc(sizeof *temp);
        temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
    }
    else
    {
        int i = 1;
        while(i <= position - 2)
        {
            ptr = ptr->next;
            i++;
        }
        struct Node *temp = malloc(sizeof *temp);
        temp = ptr->next;
        if(temp->next == NULL)
        {
            ptr->next = NULL;
        }
        else
        {
            ptr->next = temp->next;
        }
        free(temp);
    }
}

int main()
{
    int N, counter, price, position;
    scanf("%d", &N);
    for(counter=1; counter<=N; counter++)
    {
        scanf("%d", &price);
        append(price);
    }
    int M;
    scanf("%d", &M);
    while(M--)
    {
        scanf("%d", &position);
        removeAt(position);
    }
    struct Node *ptr = malloc(sizeof *ptr);
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->price);
        ptr = ptr->next;
    }
    printf("NULL");
    return 0;
}
