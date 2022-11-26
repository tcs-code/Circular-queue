#include<stdio.h>
int deq();
void enq(int a);
void display();

int front=-1,rear=-1,queue[5];
void main()
{	int op,m,n;
	while(op!=4)
	{	printf("\nChoose operation\n1-Enqueue\n2-Dequeue\n3-Display\n4-Exit\n");
		scanf("%d",&op);
		switch(op)
		{	case 1: printf("Enter element to be enqueued: ");
				scanf("%d",&m);
				enq(m);break;
			case 2: n= deq();
				if(n==89457)
				{	printf("Queue underflow");
				}
				else
				{	printf("The dequeued element is: %d",n);
				}break;
			case 3: display();break;
			case 4: break;
			default: printf("Invalid choice");break;
		}
	}
}
void enq(int a)
{	if(front==(rear+1)%5)
	{	printf("Queue overflow");
	}
	else if(front==-1 && rear==-1)
	{	front=rear=0;
		queue[rear]=a;
	}
	else 
	{	rear = (rear+1)%5;
		queue[rear]=a;
	}
}
int deq()
{	if(front==-1 && rear==-1)
	{	return 89457;
	}
	else if( front==rear && front!=-1)
	{	int y=front;
		front=rear=-1;
		return queue[y];
	}
	else 
	{	int c= front;
		front = (front+1)%5;
		return queue[c];
	}
}
void display()
{	if(front<rear)
	{	for(int i=front;i<=rear;i++)
		{	printf("%d\t",queue[i]);
		}
	}
	else if(front==-1)
	{	printf("Empty Queue");
	}
	else if(front==rear && front!=-1)
	{	printf("%d",queue[front]);
	}
	else
	{	for(int i=front;i<5;i++)
		{	printf("%d\n",queue[i]);
		}
		for(int i=0;i<=rear;i++)
		{	printf("%d\n",queue[i]);
		}
	}
}		

				
