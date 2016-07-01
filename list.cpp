#include "list.h"
list *pos,*first,*last;
int add(list *new_item)
{
	if(first!=NULL)
	{
		new_item->next = NULL;
		last->next = new_item;
		last=new_item;
	}
	else
	{
		new_item->next=NULL;
		last=new_item;
	}
	return 0;
}

int size()
{
	int i=0;
	pos = first;
	while(pos!=NULL)
	{
		pos=pos->next;
		i++;
	}
	return i;
}

list* output(int j)
{
	int i=0;
	pos=first;
	while(j!=i)
	{
		pos=pos->next;
		i++;
	}
	return pos;
}