
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
//typedef struct _node{
//	int value;
//	struct _node *next;//�ڵ� 
//}Node; 

typedef struct _list{
	Node* head;
}List;

void add(List* pList,int number);//�ӵ㶫�� 
void print(List *pList);//������� 
void find (List *pList);//���� 
void delete_(List *pList);//ɾ�� 
int main(int argc,char const *argv[])
{
	List list;
	int number;
	list.head = NULL;
	do
	{
		scanf("%d",&number);
		if(number != -1)
		{
			add(&list,number);
		}
	}while(number != -1);
	print(&list);
	find(&list) ;
	delete_(&list);
	return 0;
}

void add(List* pList,int number)
{
	// add to linked-list 
		Node *p =(Node*)malloc(sizeof(Node));
		p->value = number;
		p->next = NULL;
		Node *last = pList->head ;
		if(last)
		{
			while(last->next)
			{
				last = last->next;
			}
			//attach
			last ->next = p;
		}
		else
		{
			pList->head = p;
		}
}

void print(List *pList)
{
	Node *p;
	for(p=pList->head ; p ; p=p->next)
	{
		printf("%d\t",p->value);
	}
	printf("\n");
}
void find (List *pList)
{
	int number_;
	scanf("%d",&number_);
	Node *p;
	int isFound = 0;
	for(p=pList->head;p;p=p->next)
	{
		if( p->value == number_)
		{
			printf("�ҵ���\n");
			isFound = 1;
			break;
		}
	}
	if(isFound)
	{
		printf("û�ҵ�\n");
	}
}
void  delete_(List *pList)
{
	int number_delete;
	scanf("%d",&number_delete);
	Node *p;
	Node *q;
	for(q=NULL,p=pList->head;p;p=q,p->next)
	{
		if(p->value == number_delete)
		{
			if(q)
			{
				q->next = p->next;
			}
			//�ĸ�ָ�������û�б�֤��ȫ�� 
			else
			{
				pList->head = p->next;
			}
			free(p);
			break;
		}
	}
}
