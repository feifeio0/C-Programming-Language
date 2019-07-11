//散列表 cache 


#include<stdio.h>
/*int amount[] = {1,5,10,25,50};
const char *name[] = {"penny","nickel","dime","quarter","half-dollar"};*/
struct
{
	int amount;
	const char *name;
	//给我一个字符串我只要读取它 
} coins[] = {{1,"penny"},{5,"nickel"},{10,"dime"},{25,"quarter"},{50,"half"}};
int search(int key,int a[],int len)
{
	int ret = -1;
	for(int i=0;i<len;i++)
	{
		if(key == a[i])
		{
			ret = i;
			break;
		}
	}
	return ret;
}
int main(void)
{

	int k = 25;
	/*int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));*/
	for(int i=0;i<sizeof(coins)/sizeof(coins[0]);i++)
	{
		if(k == coins[i].amount)
		{
			printf("%s\n",coins[i].name);
			break;
		}
	}
	/*if(r>-1)
	{
		printf("%s\n",name[r]);
	}
	else
	{
		printf("zhaobudao");
	}*/
 } 
