#include <stdio.h>
#define N 100
#define END -999

int binary_search_tree[N];
int count = 0;

int insert_tree(int item)
{
	int initial = 1;
	while(binary_search_tree[initial] != END)
	{
		if(item > binary_search_tree[initial])
		{
			initial = (2 * initial) + 1;
		}
		else
		{
			initial = 2 * initial;
		}
	}
	binary_search_tree[initial] = item;
	if(initial > count)
	{
		count = initial;
	}
	return count;
}

void display(int size)
{
	int i;
	for(i = 1; i <= size; i++)
	{
		if(binary_search_tree[i] == END)
		{
			printf("[%d | ], ", i);
		}
		else
		{
			printf("[%d | %d], ", i, binary_search_tree[i]);
		}
	}
	printf("\n");
	printf("\n");
}

void search_tree(int search_item)
{
	int i = 1;
	while(binary_search_tree[i] != search_item)
	{
		if(search_item > binary_search_tree[i])
		{
			i = (2 * i) + 1;
		}
		else
		{
			i = 2 * i;
		}
		if(i > N)
		{
			printf("The Item Does Not Found!\n");
			return;
		}
	}

	printf("The item: %d loc is: %d\n", search_item, i);
}

int main()
{
	int i, loc;
	for(i = 1; i < N; i++)
	{
		binary_search_tree[i] = END;
	}
	insert_tree(10);
	insert_tree(8);
	insert_tree(7);
	insert_tree(6);
	insert_tree(15);
	insert_tree(21);
	insert_tree(23);
	loc = insert_tree(19);
	display(loc);
	search_tree(21);
	return 0;
}
