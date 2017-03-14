#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int data; 
	struct node* next; 
}node;
node *head1 = NULL;
node *head2 = NULL;
void insertelement(node **l1, int i); 
node* addlists(node* l1, node *l2, int carry);
void printlist(node * result);
int main()
{
	insertelement(&head1, 7); 
	printf("head1->data %d", head1->data);
	insertelement(&head1, 9); 
	insertelement(&head1, 6); 
	printlist(head1);
	
	insertelement(&head2, 5);
	insertelement(&head2, 2);
	insertelement(&head2, 2);
	printlist(head2);

	node *result = addlists(head1, head2, 0);
	printlist(result);
	return 0; 
} 

void insertelement(node **l1, int i)
{
   node *temp = *l1;
	if (NULL == temp)
	{
		printf("In the if condition i %d\n", i);
		temp = (node*)malloc(sizeof(node));
	   if ( NULL != temp )
		{
			temp->data = i; 
			temp->next = NULL; 
		}
		*l1 = temp;
	}
	else
	{
		printf("In the else condition i %d\n", i);
		while ( NULL != temp->next)
		{
			temp = temp->next;
		}
		temp->next = (node*)malloc(sizeof(node));
	   if ( NULL != temp->next )
		{
			temp->next->data = i; 
			temp->next->next = NULL; 
		}
	}
}


node* addlists(node* l1, node *l2, int carry)
{
	if(NULL == l1 && NULL == l2 && 0 == carry)
		return NULL;
	else
	{
		node *result = (node*)malloc(sizeof(node));
		int value = carry;		

		if (NULL != l1)
		{
			value += l1->data;
			printf ("Value after adding l1 %d \n", value);
		}
		if (NULL != l2)
		{
			value += l2->data;
			printf ("Value after adding l2 %d \n", value);
		}
		
		result->data = value %10; 

		result->next = addlists( ((NULL != l1) ?l1->next:NULL),
					                ((NULL != l2)?l2->next: NULL),
					 						value>=10?1:0);	  
		return result;
	}
}
void printlist(node * result)
{
	if(NULL != result) 
	{
		while (result != NULL)
		{
			printf("%d ", result->data);
			result = result->next;
		}
	}
}
