#include <stdio.h>
#include <stdlib.h>
typedef struct _node{
	char data;
	struct _node *next;
}node;

node *head, *end;

node *make_node(char data) {
	node *temp = (node *)malloc(sizeof(node));
	temp -> data = data;
	return temp;
}

node *insert_node(char data) {
	node *indexNode;
	node *temp;
	for (indexNode = head; indexNode != end ; indexNode = indexNode->next) {
		if(indexNode->next->data > data) {
			printf("head:%p end:%p indexNode:%p %p %c\n", head, end, indexNode, indexNode->next, indexNode->data);
			node *new_node = (node *)malloc(sizeof(node));
			new_node -> data = data;
			temp = indexNode->next;
			indexNode->next = new_node;
			new_node -> next = temp;
			return new_node;
		}
	}

	return NULL;
}

int main() {
	
	head = (node *) malloc(sizeof(node));
	end = (node *) malloc(sizeof(node));

//
	node *temp, *indexNode;

	head -> next = end;
	end->next = end;
	for (indexNode = head; indexNode != end; indexNode = indexNode->next) {
		printf("before head:%p end:%p indexNode:%p %p %c\n", head, end, indexNode, indexNode->next, indexNode->data);
	}

	node *temp1 = (node *)malloc(sizeof(node));
	indexNode = temp1;
	head->next = indexNode;
	indexNode->data = 'a';
	indexNode->next = end;

	node *temp2 = (node *)malloc(sizeof(node));
	indexNode->next = indexNode;
	indexNode->data = 'b';
	indexNode->next = end;



	printf("\n");
	//temp -> next = end;
//	temp = insert_node('a');
//	temp = insert_node('b');
//	temp = insert_node('c');

	for (indexNode = head; indexNode != end; indexNode = indexNode->next) {
		printf("after head:%p end:%p indexNode:%p %p %c\n", head, end, indexNode, indexNode->next, indexNode->data);
	}
	printf("\n");
	//insert_node(b);
//
//
//	temp = make_node(b);
//
//	temp = make_node(c);
//	temp = make_node(d);
//	temp->next;



	return 0;
}
