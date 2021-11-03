#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *last=NULL;

void create()
{	

	int data;
	int ch;
	struct node *new;
	printf("Enter the element");
	scanf("%d",&data);
	new = (struct node*)malloc(sizeof(struct node));
	if(new == NULL)
	{
		printf("No space available");
		return ;
	}
	new->data=data;
	new->next=NULL;
	if(head == NULL)
	{
		head=new;
		last=new;
	}
	else
	{
		last->next=new;
		last=new;
	}
	
	
	printf("enter choice: 0 for exit");
	scanf("%d",&ch);
	if(ch!=0)
	{
		create();
	}
	
	return ;
}
/*struct node *insert(int temp,struct node *first,struct node *next)
{
    struct node *t2,*new;
    for(t2=head;t2->next!=next;t2=t2->next)
    {
        if(t2->data>temp)
        {
            new=(struct node*)malloc(sizeof(struct node));
            new->data=temp;
           if(t2==head)
           {
               
               new->next=t2;
               
           }
           else
           {
               struct node *t1=head;
               while(t1->next!=t2)
               {
                   t1=t1->next;
               }
               t1->next=new;
               new->next=t2;
           }
           
        }
        
    }
    return t2;
    
}
*/

/*void insertion_sort()
{
    struct node *first,*second,*del,*next;
    int temp;
    
    for(second=head->next;second!=NULL;second=second->next)
    {
        first=head;
        if(second->data < first->data)
        {
            temp=second->data;
            next=second->next;
            free(second);
            first->next=next;
            
            second = insert(temp,first,next);
            
        }
        
    }
    
}
*/

void Bubble_sort()
{
    struct node *first,*second;
    int temp;
    if(head == NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        for(first = head;first->next != NULL;first=first->next)
        {
            for(second = first->next;second != NULL;second = second->next)
            {
                if(second->data < first->data)
                {
                    temp = second->data;
                    second->data = first -> data;
                    first->data = temp;
                    
                }
            }
        }
    }
}

void display()
{
	struct node *temp=head;
	if(head == NULL)
	{
		printf("No elements are found");
	}
	else{
	while(temp!=NULL)
	{
	printf("%d->",temp->data);
	temp=temp->next;
	
	}
	printf("\n");
	}
}

int main()
{
	create();
	display();
	printf("\n");
	//insertion_sort();
	Bubble_sort();
	display();
	return 0;
}
