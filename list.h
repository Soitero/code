#include <iostream>
struct list
{
	char name[10],spec[10],age[3];
	list *next;
};
void createlist(list* first);
void add(list *new_item);
list* first_item();