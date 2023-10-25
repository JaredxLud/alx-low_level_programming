#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 *
 */
// Define the structure for a node in the list
struct listint_t {
	int data;
	struct listint_t *next;
};


// Function to print all elements of a list
size_t print_listint(const struct listint_t *h) {
	size_t count = 0; // Initialize a count variable

	while (h != NULL) {
		printf("%d\n", h->data);
		h = h->next;
		count++;
	}


	return count;
}

int main() {
	// Example usage
	struct listint_t node1, node2, node3;
	node1.data = 1;
	node2.data = 2;
	node3.data = 3;

	node1.next = &node2;
	node2.next = &node3;
	node3.next =NULL;

	// Call the function to print the list and get the count
	size_t count = print_listint(&node1);

	printf("Count: %lu\n", count);

	return 0;
}
