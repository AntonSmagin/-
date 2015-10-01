struct Node
{
	int val;
	Node *p;
};


Node *First(int val);

void add(Node **pend, int val);
int del(Node **pbeg);
void print(Node **pbeg);
void menu();
