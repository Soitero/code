#include "list.h"
void addlist()
{
	pos = new list;
	pos = first;
	while(pos!=NULL)
	{
		last = pos;
		pos = pos->next;
	}
	cout << "¬ведите им€ животного(кличку)\n";
	cin >> pos->name;
	cout << "¬ведите вид животного\n";
	cin >> pos->spec;
	cout << "¬ведите возраст животного\n";
	cin >> pos->age;
	last->next = pos;
	pos->next=NULL;
	last = pos;
}
void firstlist()
{
	first = new list;
	cout << "¬ведите им€ животного(кличку)\n";
	cin >> first->name;
	cout << "¬ведите вид животного\n";
	cin >> first->spec;
	cout << "¬ведите возраст животного";
	cin >> first->age;	
	first->next=NULL;
	last = first;
}
