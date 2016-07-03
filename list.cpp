#include "list.h"
list *pos,*first,*last;

int List::add(list *new_item)
{
	if(first!=NULL)
	{
		pos = new_item;
		last->next = pos;
		pos->next=NULL;
		last=pos;
	}
	else
	{
		first = new_item;
		first->next=NULL;
		last=first;
	}
	return 0;
}

int List::size()
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

list* List::output()
{
	if(first!=NULL)
	{
	pos = first;
	first=first->next;
	return pos;
	}
	else return NULL;
}

list* List::item_at_pos(int j)
{
	int i=1;
	pos=first;
	while(i<j)
	{
		pos=pos->next;
		i++;
	}
	return pos;
}