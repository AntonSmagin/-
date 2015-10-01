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
	int temp = NULL;
	while (pbeg != NULL)
	{
		temp = (*pbeg)->val;
		printf("%d ", temp);
		*pbeg = (*pbeg)->p;
		
	}

}
