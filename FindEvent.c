#include"headers.h"

void FindEvent(char Title[20])
{
	EH *temp=head;
	while(temp)
	{
		if (strcmp(temp->title,Title)==0)
		{
			printf("Event Found.\n\n");
			printf("Event ID: %s\n",temp->id);
			printf("Event Title: %s\n",temp->title);
			printf("Event Date: %s/%s/%s\n",temp->day,temp->month,temp->year);
			printf("Event Description: %s\n\n",temp->description);
			return;
		}
		temp=temp->next;
	}
	printf("Event not found.\n\n");
}

