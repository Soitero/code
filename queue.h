#include <iostream>
#include "list.h"
class Queue
{
public:
	int size_of_list();
	int enqueue(list* pos);
	list* dequeue();
	list* see_all(int j);
};