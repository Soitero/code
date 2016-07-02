#include "queue.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int j=1;
	list *pos;
	while(1)
	{
		int n;
		cout << "1.Ввод\n2.Вывод одного элемента\n3.Вывод\n4.Выход\n";
		cin >> n;
		switch(n)
		{
		case 1:
			pos = new list;
			cout << "Введите данные" << "\n";
			cout << "Введите кличку животного\n";
			cin >> pos->name;
			cout << "Введите пароду животного\n";
			cin >> pos->spec;
			cout << "Введите возраст животного\n";
			cin >> pos->age;
			if(enqueue(pos)) cout << "ERROR!";
			else cout << "element successfully added";
			bool l;
			cin >> l;
			while(l)
			{
				pos = new list;
				cout << "Введите кличку животного\n";
				cin >> pos->name;
				cout << "Введите пароду животного\n";
				cin >> pos->spec;
				cout << "Введите возраст животного\n";
				cin >> pos->age;
				if(enqueue(pos)) cout << "ERROR!";
				else cout << "element successfully added";
				cin >> l;
			}; break;
		case 2:
			pos = dequeue();
			if(pos!=NULL)
			{
				cout << pos->name<< endl << pos->spec<< endl << pos->age<< endl;
				delete pos;
			}
			else cout << "Элемент не найден";
				break;
		case 3: 
			while(j<=size_of_list())
			{
				pos = see_all(j);
				cout << pos->name << endl << pos->spec << endl << pos->age << endl;
				j++;
			}; j=1; break;
		case 4: break;
		}if(n==4) break;
	}
}