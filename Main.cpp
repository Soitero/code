#include "queue.h"
void main()
{
	int n;
	while(1)
	{
		system("cls");
		cout << "\t\tМЕНЮ\n1.Ввод\n2.Вывод\n3.Вывести весь список\n4.Выход";
		cin >> n;
		switch(n)
		{
		case 1: enqueue(); break;
		case 2: dequeue(); break;
		case 3: deqAll(); break;
		case 4: break;
		}
		if(n==4)break;
	}
}
