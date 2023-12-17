#include<stdio.h>
#include<string.h>
#include"linkedlist.h"

int main(){
    struct Node*head=CreateNode(4);
    head=insertAtBeg(head,1);
    head=insertAtBeg(head,9);
    head=insertAtBeg(head,15);
    head=insertAtEnd(head,6);
    printf("LINKED LIST:\n");
    LinkedListTraversal(head);
    printf("\nDeleting \'6\':\n");
    DeletingByValue(head,6);
    LinkedListTraversal(head);
    printf("\n");
    printf("Searching for Node \'4\':\n");
    int searchvalue=4;
    struct Node*foundNode=SearchByValue(head,searchvalue);
    if (foundNode!=NULL){
        printf("Node with value %d found!\n",searchvalue);

    }else{
        printf("Node with value %d not found\n",searchvalue);
    }
   freelist(head);
    return 0;

}