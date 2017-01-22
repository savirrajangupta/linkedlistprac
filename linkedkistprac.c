//creating a linked list
#include <stdio.h>
int main(){
        struct node {
                int data;
                struct node* next;
        };
        struct node* head;
        struct node* second;
        struct node* third;
        head=struct node*(malloc(sizeof(struct node)));
        second=struct node*(malloc(sizeof(struct node)));
        third=struct node*(malloc(sizeof(struct node)));
        head->data=1;
        head->next=second;
        second->data=2;
        second->next=third;
        third->data=3;
        third->next=NULL;
        return 0;
}

//printing itrms in the linked list
void printlist(struct node* n)
{
        while(n!=NULL)
        {
                println("%d",n->data);
                n=n->next;
        }
}
//in main
printlist(head);
