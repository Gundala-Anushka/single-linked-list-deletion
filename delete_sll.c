//performing deletion operation on single linked list
#include<stdio.h>
#include<stdlib.h>
#include"Linklist.h"

Node *head=NULL;
void DeleteAtBeginning()
{
	Node *temp;
	if(head==NULL)
		printf("List is empty\n");
	else
		temp=head;
	head=head->next;
	free(temp);
}
void DeleteFromEnd()
{
	if(head==NULL)
		printf("List is empty");
	else
	{
		Node *temp, *prev;
		temp=prev=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
	}
}
void DeleteAny(int pos)
{
	int nctr=CountNodes(head);
	if(pos>1 && pos<nctr)
	{
		Node *temp=head;
		Node *prev=NULL;
		int count=0;
		while(count<pos)
		{
			prev=temp;
			temp=temp->next;
			count+=1;
		}
		prev->next=temp->next;
		free(temp);
	}
	else
		printf("Invalid\n");
}
int main() {
    int choice, pos;

    while (1) {
        printf("1. Delete from Beginning\n");
        printf("2. Delete from End\n");
        printf("3. Delete from Position\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                DeleteAtBeginning();
                break;
            case 2:
                DeleteFromEnd();
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                DeleteAny(pos);
                break;
            case 4:
                Traverse(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
	
