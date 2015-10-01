#include "stdafx.h"
#include "queue.h"
#include <iostream>


using namespace std;

//Node *pbeg = First(10);
//Node *pend = pbeg;

// Node *pbeg = NULL, *pend = NULL;
//


Node *First(int val)
{
	Node *pv = new Node;
	pv->val = val; //(*pv).val
	pv->p = NULL;
	return pv;
}

void add(Node **pend, int val)
{
	Node *pv = new Node;
	pv->val = val;
	pv->p = NULL;
	(*pend)->p = pv;
	*pend = pv;
}


int del(Node **pbeg)
{
	int temp = (*pbeg)->val;
	Node *pv = *pbeg;
	*pbeg = (*pbeg)->p;
	delete pv;
	return temp;
}



void print(Node **pbeg)
{
	Node *tmp = (*pbeg)->p;
	
	printf("%d ", (*pbeg)->val);
	while (tmp != NULL)
	{
			printf("%d ", tmp->val);
			tmp = tmp->p;
	}
	cout << endl;
	
}

void menu()
{
	setlocale(LC_ALL,"Russian");
	cout << "***QUEUE***" << endl << endl;
	Node *pbeg = NULL;
	Node *pend = NULL;
	{
		cout << "1. Добавить первый элемент в очередь\n";
		cout << "2. Добавить новый элемент в очередь\n";
		cout << "3. Удалить первый элемент из очереди\n";
		cout << "4. Распечатать элемент(ы) очереди\n\n";
		cout << "Выберите число и нажмите ENTER\n";
		int t;
		int first_el;
		int el = 0;
		do
		{
			cin >> t;
			switch (t)
			{
			case 1:

				cin >> first_el;
				pbeg = First(first_el);
				pend = pbeg;
			case 2:

				cout << "Напишите новый элемент\n";
				cin >> el;
				add(&pend, el);
			case 3:
				if (pbeg == NULL)
					cout << "В очереди нет элементов\n";
				else
					del(&pbeg);

			case 4:
				cout << "Распечатаная очередь\n";
				print(&pbeg);
			}
		} while (t);
		
	}
}
