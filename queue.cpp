#include "queue.h"
int size_of_list()			//���������� ���������� ��������� � ������ 
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