#include <iostream>
struct list
{
	char name[10],spec[10],age[3];
	list *next;
};
class List
{
public:
	int size();
	int add(list *new_item);
	list* output();
	list* item_at_pos(int j);
};