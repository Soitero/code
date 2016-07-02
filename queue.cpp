#include "queue.h"
int size_of_list()			//Возвращает количество элементов в списке 
{
	return size();
}

int enqueue(list *pos)
{
	return add(pos);
}

list* dequeue()
{
	return output();
}

list* see_all(int j)
{
	return item_at_pos(j);
}