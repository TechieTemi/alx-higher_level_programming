#include <stdio.h>
#include <stdlib.h>

/* Create a template for my list*/
typedef struct Node
{
	int age;
	struct Node *next;
}node;

/* create a function for adding list*/
void *add(node **head, int age)
{
	// Create an instance for my noe
	node *firstnode = (node *)malloc(sizeof(node));
	node *temp = (node *)malloc(sizeof(node));

	if (firstnode == NULL)
	{
		printf("Error Encountered\n");
		exit(1);
	}
	firstnode->age = age;
	firstnode->next = *head;
	*head = NULL;

	//Have a condition to check if the list is empty or not
	if (*head == NULL)
	{
		*head = firstnode;
	}
	else 
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
		}
		temp->next = *head;
	}
}


// A function that add nodes at any position we specified
void *insert_middle(node *head, int pos, int age)
{
	// Create an instance for your new node
	node *middle_node = malloc(sizeof(node));
	middle_node->age = age;
	middle_node->next = NULL;
	int traverse = 0;

	// Give a condition to check if the list is empty or not
	// if the list is empty, set your new node to head
	if (head == NULL)
	{
		head = middle_node;
	}
	else
	{
		// This is the point in the movie where you will look for two actors, 
		// To keep track of each
		node *prev_node;
		node *current_node;
		// Set the position of the current node to head, so we can 
		// Use that to traverse and then use the prev_node to keep 
		// track of the current one
		current_node = head;
		// Create a loop for the traversing
		while (traverse < pos)
		{
			// We will initialize our prev_node to the position of the current_node
			prev_node = current_node;
			// The next thing to do is to shift current_node from it's initial 
			// position to the next, using the prev_node to keep track of it 
			// while the condition is true, and when the condition turns false, 
			// a space will be allocated at the initial position we specified for
			// our new node
			current_node = current_node->next;
			// The next thing is to do our incrementing
			traverse++;
		}
		// The next thing is to make our new node to point to the current node
		prev_node->next = middle_node;
		middle_node->next = current_node;
	}
}

// A function that insert node at the end of the list
void *insert_end(node *head, int age)
{
	// Create an instance for your node
	node *end_node = malloc(sizeof(node));
	// Assign value and point it to NULL
	end_node->age = age;
	end_node->next = NULL;
	// Give a condition ti check if the list is empty or not
	// If the list is empty, set the end_node to head
	if (head == NULL)
	{
		head = end_node;
	}
	else
	{
		// create a node to assign head to and that is what
		// you will use to traverse your list
		node *traverse = head;
		while (traverse->next != NULL)
		{
			// The next thing is to traverse the list to the null positon
			// while the condition is true
			traverse = traverse->next;
		}
		// initialize traverse to the new node we want it to point to
		traverse->next = end_node;
		//end_node->next = NULL;
	}
}
// A function that delete node at the beginning
void *delete_firstnode(node **head)
{
	//head = malloc(sizeof(node));
	if (*head == NULL)
	{
		printf("The list is empty, nothing to delete\n");
		exit(1);
	}
	else
	{
		// Declare a variable to take the position of head and move head to 
		// The next pointer
		node *ptr = *head;
		*head = (*head)->next;
		free(ptr);
		//ptr = NULL;
	}
}

// A function that delete at the end node
void *delete_endnode(node **head)
{
	// Give a condition to check if the list is empty
	// if it is empty, then, it's going exit.
	if (*head == NULL)
	{
		printf("The list is empty\n");
		exit(1);
	}
	// The next thing we also havee to do now is to also check
	// if the list contain just one node, that is, if the next of
	// head point to NULL
	else if ((*head)->next == NULL)
	{
		node *ptr = *head;
		*head = ptr->next;
		free(ptr); 
	}
	// So the question to ask now is, what if the list is more
	// Than One, what should we do?
	else
	{
		// Create a two instance know as your prev_node and your 
		// current node and set the current node to the value of
		// head, so that you can use it to traverse the list while
		// setting prev_node to the previous position of current 
		// node
		node *prev_node;
		node *current_node = *head;
		while (current_node->next != NULL)
		{
			prev_node = current_node;
			current_node = current_node->next;
		}
		prev_node->next = NULL;
		//free(current_node);
	}
}

// A function that delete node at any position given
void *delete_any_node(node **head, int pos)
{
	*head = (node *)malloc(sizeof(node));
	int index = 0;
	printf("Enter this function");
	// Check if the list is empty
	if (*head == NULL)
	{
		printf("The list is empty\n");
		exit(1);
	}
	//int index = 0;
	// This is to check if the position given is equal 0
	// which it's next is pointing to NULL
	else if (pos == 0)
	{
		// Declare a variable to the manipulation for us
		node *ptr = *head;
		*head = ptr->next; // meaning, head is now taking the position of NULL
				   // or any value of ptr->next
		free(ptr);
	}

	else 
	{
		// What should happen if the list is not empty and yet, 
		// what the user entered is not zero or negative number
		// We have to handle the aftermath of what to happen
		// Declare two variables of the instances of your struct
		printf("Are you thre\n");
		node *prev_node;
		node *current_node = *head; // We will be traversing with the current_node
		while (index < pos)
		{
			printf("Hello\n");
			// This is where i'm going to assign the position of head
			// to prev_node
			prev_node = current_node;
			// Traverse the list
			current_node = current_node->next;
			index++;
		}
		prev_node->next = current_node->next; // pos + 1
		free(current_node);
	}
}
// A function that print list
void *print_list(node *head)
{
	// Create an instance for head
	node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d\n", temp->age);
		temp = temp->next;
	}
}

/**
 *main - Entry point of a program
 *Description: A program that checked if a link has a circle
 *Return: Always(success)
 */
int main(void)
{
	node *head = NULL;
	int pos[] = {9, 2};
	int age = 3;
	int var[] = {43, 87, 24, 12, 90};
	add(&head, var[0]);
	add(&head, var[1]);
	add(&head, var[2]);
	add(&head, var[3]);
	add(&head, var[4]);
	insert_middle(head, pos[0], age);
	insert_middle(head, pos[1], age);
	insert_end(head, age / 4);
	delete_firstnode(&head);
	delete_firstnode(&head);
	delete_firstnode(&head);
	delete_endnode(&head);
	printf("Got here\n");
	//delete_any_node(&head, age);

	//The next thin is to call my print function
	print_list(head);
	return (0);
}
