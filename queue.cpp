#include "queue.h"
void enqueue()
{
	if (first = NULL)
	{
		firstlist();
		first->i++;
	}
	else
	{
		addlist();
		pos->i++;
	}
}

void dequeue()
{
	int j = 0;
	cout << "Введите номер элемента для вывода на экран\n\t";
	cin >> j;
	pos = first;
	while(pos->i!=j)
	{
		pos=pos->next;
	}
	cout << "Ваш элемент:\n" << pos->name << "\n" << pos->spec << "\n" << pos->age << "\n";
	system("pause");
}
void deqAll()
{
	cout <<		"+-----------------------------------+";
	pos = first;
	while(pos!=NULL)
	{
		pos=pos->next;
		cout << "|Имя животного|Вид животного|Возраст|";
		cin.width(13);
		cin >> pos->name;
		cout << "|";
		cin.width(13);
		cin >> pos->spec;
		cout << "|";
		cin.width(7);
		cin >> pos->age;
		cout << "|";
	}
	cout <<		"+-----------------------------------+";
}