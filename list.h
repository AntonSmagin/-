struct Queue
{
	int val;
	Queue *next;
};
struct List
{
	int val;
	List *next;
};


Queue *First1(int val);
List *First2(int val);
void insert_before(List **pbeg, int key, int el);
void insert_after(List*const pbeg, int key, int el);

void add(Queue **pend, int val);
int del(Queue **pbeg);
bool del_key(List **pbeg, int key);
void print1(Queue **pbeg);
void print2(List **pbeg);
void menu();
void menu1();
void menu2();
