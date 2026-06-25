#include"headers.h"

void DeleteEvent(char Id[20])
{
	EH *temp=head;
	EH *prev=NULL;
	if (strcmp(head->id,Id)==0)
	{
		EH *first=head;
		head=head->next;
		free(first);
		first=NULL;
		printf("Event Deleted succesfully.\n\n");
		return;
	}
	else
	{
		while(temp)
		{
			if(strcmp(temp->id,Id)==0)
			{
				prev->next=temp->next;
				free(temp);
				temp=NULL;
				printf("Event Deleted succesfully.\n\n");
				return;
			}
			prev=temp;
			temp=temp->next;
		}
		printf("Event not found.\n\n");
	}
}

