#include "stdafx.h"
#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
	Node *pbeg = First(10);
	Node *pend = pbeg;

	for (int i = 2; i < 6; i++)
	{
		add(&pend, i);

	}
	print(&pbeg);



	system("pause");
	return 0;
}
