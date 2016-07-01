#include "list.h"
list *pos,*first,*last;
void add(list *new_item)
{
	new_item->next = NULL;
	last->next=new_item;
	last=new_item;
}

void createlist(list* f)
{
	f->next=NULL;
	last=f;
	first = f;
}

list* first_item()				//Возвращает первый элемент списка
{
	return first;
}