#include "queue.h"
#include <stdlib.h>
using namespace std;
Queue q;
int main()
{
	
	setlocale(LC_ALL, "RUS");
	int j=1;
	list *pos;
	while(1)
	{
		system("cls");
		int n;
		cout << "1.����\n2.����� ������ ��������\n3.�����\n4.�����\n";
		cin >> n;
		switch(n)
		{
		case 1:
			pos = new list;
			cout << "������� ������" << "\n";
			cout << "������� ������ ���������\n";
			cin >> pos->name;
			cout << "������� ������ ���������\n";
			cin >> pos->spec;
			cout << "������� ������� ���������\n";
			cin >> pos->age;
			if(q.enqueue(pos)) cout << "ERROR!";
			else cout << "element successfully added";
			bool l;
			cin >> l;
			while(l)
			{
				pos = new list;
				cout << "������� ������ ���������\n";
				cin >> pos->name;
				cout << "������� ������ ���������\n";
				cin >> pos->spec;
				cout << "������� ������� ���������\n";
				cin >> pos->age;
				if(q.enqueue(pos)) cout << "ERROR!";
				else cout << "element successfully added";
				cin >> l;
			}; break;
		case 2:
			pos = q.dequeue();
			if(pos!=NULL)
			{
				cout << pos->name<< endl << pos->spec<< endl << pos->age<< endl;
				delete pos;
			}
			else cout << "������� �� ������";
				system("pause"); break;
		case 3: 
			while(j<=q.size_of_list())
			{
				pos = q.see_all(j);
				cout << pos->name << endl << pos->spec << endl << pos->age << endl;
				j++;
			}; j=1;
			system("pause"); break;
		case 4: break;
		}if(n==4) break;
	}
}