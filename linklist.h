#include<stdio.h>
#include<stdlib.h>
//this is the header file i created to use in the program 
typedef struct slinkedlist
{
	int data;
	struct slinkedlist *next;
} Node;

Node* CreateNode();
Node* Createlist();
