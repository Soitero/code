#include "queue.h"
List l;
int Queue::size_of_list()			//Возвращает количество элементов в списке 
{
	return l.size();
}

int Queue::enqueue(list *pos)
{
	return l.add(pos);
}

list* Queue::dequeue()
{
	return l.output();
}

list* Queue::see_all(int j)
{
	return l.item_at_pos(j);
}