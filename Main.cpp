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
			if(enqueue(pos)) cout << "ERROR!";
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
			else cout << "������� �� ������";
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