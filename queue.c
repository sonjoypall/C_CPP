#include <stdio.h>
int queueArray[100], font = -1, rear = -1, size = 10;

void inserting()
{
	int i;
	if(font == -1){
		font++;
		for(i = 0; i < size; i++)
		{
			scanf("%d", &queueArray[i]);
			rear++;
		}
	}
}

void enQueue(int n)
{
	if((rear + 1 == font) || (font == 0 && rear == size -1))
	{
		printf("Queues is full\n");
	}
	else{
		if(font == -1){
			font++;
		}
		rear++;
		queueArray[rear] = n;
	}
}

void deQueue()
{
	int temp;
	if(font == -1)
	{
		printf("\nQueue is empty!\n");
	}
	else{
		if(font == rear){	//If we have only one item in the Queues.
			font = -1;
			rear = -1;
		}
		else{
		temp = font;
		font++;
		printf("\nItem %d is Deleted!\n", queueArray[temp]);
		}
	}
}

void display()
{
	int i;
	for(i = font; i <= rear; i++)
	{
		printf("%d ", queueArray[i]);
	}
	printf("\n");
}

int main()
{
	inserting();
    enQueue(100);
    display();
    deQueue();
    enQueue(6);
	display();
    return 0;
}
