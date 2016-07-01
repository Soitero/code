#include "queue.h"
int size_of_list()			//Возвращает количество элементов в списке 
{
	return size();
}

int enqueue(list *pos)
{
	return add(pos);
}

list* dequeue(int j)
{
	return output(j);
}