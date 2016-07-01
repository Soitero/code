#include "list.h"
#include "queue.h"
int size_of_list()			//Возвращает количество элементов в списке 
{
	int i=0;
	list *pos;
	pos = first_item();
	while(pos!=NULL)
	{
		pos=pos->next;
		i++;
	}
	return i;
}

list* item_at_pos(int j)	//Возвращает элемент списка в позиции j
{
	list* pos;
	pos = first_item();
	int i=0;
	while(j!=i)
	{
		pos=pos->next;
		i++;
	}
	return pos;
}

void enqueue(list *pos)
{
	if (first_item()!=NULL)
	{
		add(pos);
	}
	else
	{
		createlist(pos);
	}
}

