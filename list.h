#include <iostream>
struct list
{
	char name[10],spec[10],age[3];
	list *next;
};
int size();
int add(list *new_item);
list* output(int j);