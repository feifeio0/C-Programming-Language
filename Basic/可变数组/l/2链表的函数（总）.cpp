
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
//typedef struct _node{
//	int value;
//	struct _node *next;//�ڵ� 
//}Node; 

typedef struct _list{
	Node* head;
//	Node* tail;
}List;

void add(List* pList,int number);
int main(int argc,char const *argv[])
{
	//Node *head = NULL;
	List list;
	int number;
	//List.head = List.tail = NULL;
	list.head = NULL;
	do
	{
		scanf("%d",&number);
		if(number != -1)
		{
			add(&list,number);//??????
		}
	}while(number != -1);
	
	return 0;
}

//1.Node* add(Node* head,int number)
//2.Node* add(Node** pHead,int number)
//3.ȫ�ֱ���head 
void add(List* pList,int number)
{
	// add to linked-list 
		Node *p =(Node*)malloc(sizeof(Node));
			//����struct _node�Ľṹ��,�ɱ�� 
		p->value = number;
		p->next = NULL;
		//find the last(����)����tail���棩 
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
