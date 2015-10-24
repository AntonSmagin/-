struct Node
{
	int val;
	Node *p; 
};


Node *First(int val);
Node *insert_befor(Node **pbeg, int key, int el);
Node *insert_after(Node*const pbeg, int key, int el);

void add(Node **pend, int val);
int del(Node **pbeg);
bool del_key(Node **pbeg, int key);
void print(Node **pbeg);
void menu();

