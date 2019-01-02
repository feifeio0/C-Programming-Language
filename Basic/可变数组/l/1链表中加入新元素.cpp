//在链表中添加新的内容 
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
//typedef struct _node{
//	int value;
//	struct _node *next;//节点 
//}Node; 

int main(int argc,char const *argv[])
{
	Node *head = NULL;
	
	int number;
	do
	{
		scanf("%d",&number);
		if(number != -1)
		{
			// add to linked-list 
			Node *p =(Node*)malloc(sizeof(Node));
				//制作struct _node的结构体,可变的 
			p->value = number;
			p->next = NULL;
			//find the last(遍历)
			Node *last = head;
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
				head = p;
			}
		}
	}while(number != -1);
	
	return 0;
}
